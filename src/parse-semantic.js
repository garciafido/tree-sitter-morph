const LIST_POSTFIX = "__list";

module.exports.buildParseSemantic = function(Parser, Morph) {
    return function parseSemantic(sourceCode) {
        class ParseSemantic {
            parser = new Parser();

            constructor() {
                this.parser.setLanguage(Morph);
            }

            getContent(node) {
                return this.code.substring(node.startIndex, node.endIndex);
            }

            traverse(node) {
                const type = node.type;
                const NewNode = {
                    type: type,
                    value: undefined,
                    children: {}
                };

                const children = node.namedChildren;

                if (children.length === 0) {
                    NewNode.value = this.getContent(node);
                }

                const NewChildren = {};
                for (const child of children) {
                    let childType = child.type;
                    const isList = childType.lastIndexOf(LIST_POSTFIX) > 0;
                    if (isList) {
                        childType = childType.substring(0, childType.lastIndexOf(LIST_POSTFIX));
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
                                throw new Error(`There is more than one child "${child.type}" and it is not declared as a list. Postfix the rule name with "${LIST_POSTFIX}"`);
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

        const ps = new ParseSemantic();
        return ps.parse(sourceCode);
    }
};
