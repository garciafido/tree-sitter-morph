#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  TEMPLATE_CHARS
};

void *tree_sitter_morph_external_scanner_create() { return NULL; }
void tree_sitter_morph_external_scanner_destroy(void *p) {}
void tree_sitter_morph_external_scanner_reset(void *p) {}
unsigned tree_sitter_morph_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_morph_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static bool scan_whitespace_and_comments(TSLexer *lexer) {
  for (;;) {
    while (iswspace(lexer->lookahead)) {
      advance(lexer);
    }

    if (lexer->lookahead == '/') {
      advance(lexer);

      if (lexer->lookahead == '/') {
        advance(lexer);
        while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
          advance(lexer);
        }
      } else if (lexer->lookahead == '*') {
        advance(lexer);
        while (lexer->lookahead != 0) {
          if (lexer->lookahead == '*') {
            advance(lexer);
            if (lexer->lookahead == '/') {
              advance(lexer);
              break;
            }
          } else {
            advance(lexer);
          }
        }
      } else {
        return false;
      }
    } else {
      return true;
    }
  }
}

bool tree_sitter_morph_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  if (valid_symbols[TEMPLATE_CHARS]) {
    lexer->result_symbol = TEMPLATE_CHARS;
    for (bool has_content = false;; has_content = true) {
      lexer->mark_end(lexer);
      switch (lexer->lookahead) {
        case '`':
          return has_content;
        case '\0':
          return false;
        case '$':
          advance(lexer);
          if (lexer->lookahead == '{') return has_content;
          break;
        case '\\':
          return has_content;
        default:
          advance(lexer);
      }
    }
    return false;
  }
}
