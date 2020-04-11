const LIST_POSTFIX = "__list";

class SyntaxError extends Error {
    constructor(node) {
        super("Syntax Error");
        this.position = {
            start: node.startPosition,
            end: node.endPosition,
        }
    }

}

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

            traverse(node, parent) {
                const type = node.type;
                const NewNode = {
                    parent,
                    type: type === "decorators__list" ? "Decorator" : type === "identifier" ? "Identifier" : type,
                    value: undefined,
                    children: {},
                    sourceFilePosition: {
                        start: node.startPosition,
                        end: node.endPosition,
                    }
                };

                const children = node.namedChildren;

                if (children.length === 0) {
                    NewNode.value = this.getContent(node);
                }

                const NewChildren = {};
                for (const child of children) {
                    if (child.type === "ERROR" || child.type === "MISSING") {
                        throw new SyntaxError(child);
                    }

                    let childType = child.type;
                    const isList = childType.lastIndexOf(LIST_POSTFIX) > 0;
                    if (isList) {
                        childType = childType.substring(0, childType.lastIndexOf(LIST_POSTFIX));
                    }
                    const firstChar = childType.charAt(0);
                    const isField = firstChar.toLowerCase() === firstChar;
                    if (isField) {
                        if (isList) {
                            if (!(childType in NewChildren)) {
                                NewChildren[childType] = [];
                            }
                            NewChildren[childType].push(this.traverse(child, NewNode));
                        } else {
                            if (childType in NewChildren) {
                                throw new Error(`There is more than one child "${child.type}" and it is not declared as a list. Postfix the rule name with "${LIST_POSTFIX}"`);
                            }
                            NewChildren[childType] = this.traverse(child, NewNode);
                        }
                    }
                }

                if (Object.keys(NewChildren).length > 0) {
                    NewNode['children'] = NewChildren;
                } else if (Object.keys(children).length === 1) {
                    return this.traverse(children[0], parent)
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
