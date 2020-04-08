const { parseSemantic } = require("./index");

console.log(JSON.stringify(parseSemantic(`lambda foo() => [bar['name']`), null, 4));
