#include <stdio.h>

// Print a histogram of the lengths of words in its input.

main() {
    int c;
    int count = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
            count += 1;
        } else {
            printf(" - ");
            for (; count>0; --count)
                printf("|");
            // count = 0;
            printf("\n");
        }
    }
}