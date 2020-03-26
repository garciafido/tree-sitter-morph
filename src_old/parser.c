#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 6
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 8
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_function = 1,
  anon_sym_EQ_GT = 2,
  anon_sym_hola = 3,
  sym_comment = 4,
  sym__automatic_semicolon = 5,
  sym__template_chars = 6,
  sym_program = 7,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_function] = "function",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_hola] = "hola",
  [sym_comment] = "comment",
  [sym__automatic_semicolon] = "_automatic_semicolon",
  [sym__template_chars] = "_template_chars",
  [sym_program] = "program",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_hola] = anon_sym_hola,
  [sym_comment] = sym_comment,
  [sym__automatic_semicolon] = sym__automatic_semicolon,
  [sym__template_chars] = sym__template_chars,
  [sym_program] = sym_program,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hola] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__automatic_semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym__template_chars] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_hola);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
};

enum {
  ts_external_token__automatic_semicolon = 0,
  ts_external_token__template_chars = 1,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__automatic_semicolon] = sym__automatic_semicolon,
  [ts_external_token__template_chars] = sym__template_chars,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__automatic_semicolon] = true,
    [ts_external_token__template_chars] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_hola] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__automatic_semicolon] = ACTIONS(1),
    [sym__template_chars] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(3),
    [anon_sym_function] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_EQ_GT,
  [7] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
  [14] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_hola,
  [21] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 7,
  [SMALL_STATE(4)] = 14,
  [SMALL_STATE(5)] = 21,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_program, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_morph_external_scanner_create(void);
void tree_sitter_morph_external_scanner_destroy(void *);
bool tree_sitter_morph_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_morph_external_scanner_serialize(void *, char *);
void tree_sitter_morph_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_morph(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_morph_external_scanner_create,
      tree_sitter_morph_external_scanner_destroy,
      tree_sitter_morph_external_scanner_scan,
      tree_sitter_morph_external_scanner_serialize,
      tree_sitter_morph_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
