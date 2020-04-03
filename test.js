const { parseSemantic } = require("./index");

const tree = parseSemantic('@foo node Person { foo -> string bar -> string }');

// console.log(JSON.stringify(tree, null, 2));
