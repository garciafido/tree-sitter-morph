import * as Parser from 'tree-sitter';
import * as Morph from '..';


class ParseSemantic {
    parser = new Parser();
    code: string;

    constructor() {
        this.parser.setLanguage(Morph);
    }

    private getContent(node) {
        return this.code.substring(node.startIndex, node.endIndex);
    }

    private traverse(node) {
        const type = node.type;
        const NewNode = {
            type: type,
            value: undefined,
            children: undefined
        };

        const children = node.namedChildren;

        if (children.length === 0) {
            NewNode.value = this.getContent(node);
        }

        const NewChildren = {};
        for(const child of children) {
            let childType = child.type;
            const isList = childType.lastIndexOf('__list') > 0;
            if (isList) {
                childType = childType.substring(0, childType.lastIndexOf('__list'));
            }
            const index = childType.lastIndexOf('_');
            if (index > 0 && node.type === childType.substring(0, index)) {
                const item = childType.substring(index + 1);
                if (isList) {
                    if (!(item in NewChildren)) {
                        NewChildren[item] = [];
                    }
                    NewChildren[item].push(this.traverse(child));
                } else {
                    if (item in NewChildren) {
                        throw new Error(`${child.type} is not declared as list and there are many items`);
                    }
                    NewChildren[item] = this.traverse(child);
                }
            }
        }

        if (Object.keys(NewChildren).length > 0) {
            NewNode['children'] = NewChildren;
        } else if (Object.keys(children).length === 1) {
            return this.traverse(children[0])
        }
        return NewNode
    }

    parse(sourceCode) {
        this.code = sourceCode;
        const tree = this.parser.parse(sourceCode);
        return this.traverse(tree.rootNode);
    }

}
    // def get_tree(self, code: str, language):
    //     parser = Parser()
    //     parser.set_language(language)
    //     self.code = code
    //     return parser.parse(bytes(code, "utf8"))
    //
    // def get_content(self, node):
    //     return self.code[node.start_byte:node.end_byte]
    //
    // def traverse(self, node, indent=-1):
    //     type = node.type
    //     dict_node = {"type": type}
    //     children = [x for x in filter(lambda c: c.is_named, node.children)]
    //     if not len(node.children):
    //         dict_node['value'] = self.get_content(node)
    //
    //     dic_children = {}
    //     for child in children:
    //         child_type = child.type
    //         is_list = child_type.rfind('__list') > 0
    //         if is_list:
    //             child_type = child_type[:-len('__list')]
    //         _index = child_type.rfind('_')
    //         if _index > 0 and node.type == child_type[0:_index]:
    //             item = child_type[_index + 1:]
    //             if is_list:
    //                 if item not in dic_children:
    //                     dic_children[item] = []
    //                 dic_children[item].append(self.traverse(child, indent+1))
    //             else:
    //                 if item in dic_children:
    //                     raise Exception(f'{child.type} is not declared as list and there are many items')
    //                 dic_children[item] = self.traverse(child, indent + 1)
    //
    //     if dic_children:
    //         dict_node['children'] = dic_children
    //     elif len(children) == 1:
    //         return self.traverse(children[0])
    //     return dict_node


// const sourceCode = `
// abstract node NicePerson extends Person {
//   nice_thing -> Thing
// }
//
// node Person {
//   first_name! -> string
//   last_name! -> string
// }
//
// node Thing {
//   name -> string
// }
//
// morph PersonWithFullName(Person) {
//   new fullname -> (self) => self['first_name'] + self['last_name']
// }
// `;

// console.log(JSON.stringify(tree, null, 4));

export function parseSemantic(sourceCode: string) {
    const pt = new ParseSemantic();
    return pt.parse(sourceCode);
}
