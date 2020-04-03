const { parseSemantic } = require("./index");

const tree = parseSemantic('node Person { foo -> string bar -> string }');

console.log(JSON.stringify(tree, null, 4));
