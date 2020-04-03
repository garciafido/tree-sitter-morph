const { parseSemantic } = require("./index");

const tree = parseSemantic('node Person {}');

console.log(tree);
