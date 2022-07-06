#include "ucc.h"

static FILE *s_in = NULL; /* Input file */

void init_lexer(FILE *f)
{
    s_in = f;
}

const char *token()
{
    // TODO: temporary implementation
    static char buf[128];
    
    int i;
    for (i = 0; (buf[i] = fgetc(s_in)) != ' '; i++);
    
    buf[i] = 0;
    return buf;
}

int ttype(char *t)
{
    return T_ID;
}
