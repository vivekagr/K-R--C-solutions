#include <stdio.h>
#define IN 1
#define OUT 0
#define SINGLE_LINE_COMMENT 2
#define MULTI_LINE_COMMENT 3

/* Remove all comments from a C program. */

main() {
    char c;
    int state = OUT; // start with state 'OUT'
    while ((c = getchar()) != EOF) {
        if (state == OUT) {
            if (c == '/') { // if state is OUT and '/' is found, then set state to IN
                state = IN;
            } else // else print the non-comment thing.
                putchar(c);
        } else if (state == IN) { // if state is IN, check next character
            if (c == '/')
                state = SINGLE_LINE_COMMENT;
            else if (c == '*')
                state = MULTI_LINE_COMMENT;
            else { // if there is only '/', then it is not part of a comment, set state to OUT and print it
                    state = OUT;
                    putchar('/');
                    putchar(c);
            }
        } else if (state == SINGLE_LINE_COMMENT) { // if single line comment, skip everything until '\n' is found
            if (c == '\n') {
                state = OUT;
                putchar(c);
            }
        } else if (state == MULTI_LINE_COMMENT) { // if multi line comment, find '*/'
            if (c == '*') {
                c = getchar();
                if (c == '/' && c != EOF)
                    state = OUT;
            }
        }
    }
}