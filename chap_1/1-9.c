// Copy the input to output, replacing each string of one or more
// blanks by a single blank.

#include <stdio.h>

#define IN  0
#define OUT 1

main() {
    int state, c;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (state != IN)
                putchar(c);
            state = IN;
        }
        else {
            state = OUT;
            putchar(c);
        }
    }
}