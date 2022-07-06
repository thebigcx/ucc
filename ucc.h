#pragma once

#include <stdio.h>

/* Token types */
#define T_KEYW 0 /* Keyword */ 
#define T_ID   1 /* Identifier */
#define T_OPER 3 /* Operator */
#define T_PUNC 4 /* Punctuation */
#define T_LIT  5 /* Literal */

/* lexer.c */
void init_lexer(FILE*); /* Initialize lexer */
const char *token();    /* Get token */
int ttype(char*);       /* Get token type */

/* AST node types */
#define A_BINEX 0 /* Binary expression */
#define A_UNEX  1 /* Unary expression */

/* AST: Abstract Syntax Tree */
struct ast
{
    struct ast *lhs, *rhs; /* Left/right nodes */

    int type;  /* Type */
    char *str; /* Literal/Operator */
};

/* parser.c */
struct ast *expr(void);
struct ast *stmt(void);
