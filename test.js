const { parseSemantic } = require("./index");

console.log(parseSemantic(`
morph Foo mutates Bar {
  foo: (self) =>
    bar(
      type(self),
      (each) =>
        self.'predicate'(each.'current_element')
          ? ListElement({this=each.'filtered'})
          -> each.'filtered',
      'current_element',
    )
}`).children)
