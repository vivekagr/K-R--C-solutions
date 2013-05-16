#include <stdio.h>

// Reads a line and prints it.

main() {
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    // printf("%d\n", EOF);
}