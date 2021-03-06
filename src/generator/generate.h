#ifndef _GENERATE_H_
#define _GENERATE_H_

#include <stdio.h>

#include "parser/ast.h"
#include "errors.h"

void generateLexerAndParser(FILE* output, Ast* ast, ErrorContext* error_context);

#endif