const { parseSemantic } = require("./index");

// const tree = parseSemantic('@foo node Person { foo -> string bar -> string }');
const code = `
@Bar
@Baz
morph Foo mutates bar {
  new bar -> "bar"
}
/*

@fooDeco()
private abstract node foo extends FooBase {
    @parental(HaikuProgramTree)
    blocks[] -> Block
}

lambda bar<A extends B | C, S extends D>(a: A): String => "bar"
*/

from ...bar import Bar, Foo

public symbol foo

enum foo {
    a
    b
    c
}

lambda foo(ara: String): String => f(a).f(b)


`;
const tree = parseSemantic(code);

console.log(JSON.stringify(tree, null, 2));
