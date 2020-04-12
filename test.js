const { parseSemantic } = require("./index");

console.log(parseSemantic(`
morph ToFilter mutates Filtered {
  filtered: (a) => 1
}`).children.declarations[0].children.members[0].children.expression);
