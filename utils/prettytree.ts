import * as Parser from 'tree-sitter';
import * as Morph from 'tree-sitter-morph';

const parser = new Parser();
parser.setLanguage(Morph);