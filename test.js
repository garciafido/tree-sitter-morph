const { parseSemantic } = require("./index");

// const tree = parseSemantic('@foo node Person { foo -> string bar -> string }');
const code = `
@Bar
morph Foo mutates bar {
  new bar -> "bar"
}
`;
const tree = parseSemantic(code);

console.log(JSON.stringify(tree, null, 2));
