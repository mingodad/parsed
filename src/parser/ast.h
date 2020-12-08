
#include <stdbool.h>

#define AST_BASE AstType type;

typedef enum {
    AST_ROOT,
    AST_DEFINITION,
    AST_OPTION,
    AST_TOKEN,
    AST_INLINE_C,
    AST_IDENTIFIER,
    AST_SEQUENCE,
    AST_SETTING,
} AstType;

typedef struct {
    AST_BASE
} Ast;

typedef struct {
    AST_BASE
    Ast** children;
    int child_count;
} AstRoot;

typedef struct {
    AST_BASE
    const char* ident;
    int ident_len;
} AstIdentifier;

typedef struct {
    AST_BASE
    AstIdentifier* ident;
    Ast* definition;
} AstDefinition;

typedef struct {
    AST_BASE
    Ast** options;
    int option_count;
} AstOption;

typedef struct {
    AST_BASE
    Ast** children;
    int child_count;
} AstSequence;

typedef struct {
    AST_BASE
    const char* src;
    int len;
} AstInlineC;

typedef struct {
    AST_BASE
    bool is_regex;
    const char* pattern;
    int pattern_len;
} AstToken;

typedef struct {
    AST_BASE
    const char* name;
    int name_len;
    Ast* value;
} AstSetting;

