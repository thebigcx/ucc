#include "ucc.h"

#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f = fopen(argv[1], "r");
    init_lexer(f);

    printf("%s\n", token());

    fclose(f);
    return 0;
}
