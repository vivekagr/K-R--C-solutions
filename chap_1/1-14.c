#include <stdio.h>

// Print a histogram of the frequencies of different characters in the input.

main() {
    int c, i, j;
    int data[128];

    for (i=0; i<128; i++) {
        data[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        ++data[c];
    }

    for (i=0; i<128; i++) {
        if (data[i] > 0) {
            printf("'%c' | ", i);
            for (j=0; j<=data[i]; ++j) {
                printf("*");
            }
            printf("\n");
        }
    }
}