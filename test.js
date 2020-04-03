const { parseSemantic } = require("./index");

const tree = parseSemantic('node Person {}');

console.log(JSON.stringify(tree, null, 4));
