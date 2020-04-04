const { parseSemantic } = require("./index");

// const tree = parseSemantic('@foo node Person { foo -> string bar -> string }');
const code = `

@Bar
@Baz
morph Foo mutates bar {
  new bar -> "bar"
}

@fooDeco()
abstract node foo extends FooBase {
    @parental(HaikuProgramTree)
    blocks[] -> Block
}

lambda foo() => f(a).f(b)

from ...bar import Bar, Foo
`;
const tree = parseSemantic(code);

console.log(JSON.stringify(tree, null, 2));
