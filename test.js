const { parseSemantic } = require("./index");

// const tree = parseSemantic('@foo node Person { foo -> string bar -> string }');
const code = `
enum foo {
    a
    b
    c
}
`;
const tree = parseSemantic(code);

console.log(JSON.stringify(tree, null, 2));
