// const Parser = require("tree-sitter");
// import * as Morph from '.';




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

export function buildParseSemantic(Parser, Morph) {
    function parseSemantic(sourceCode: string) {
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
                for (const child of children) {
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

        const pt = new ParseSemantic();
        return pt.parse(sourceCode);
    }
}
