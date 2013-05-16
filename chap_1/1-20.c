#include <stdio.h>

// ``detab.c``
// Replace tabs with white spaces

main() {
    char c;
    while((c = getchar()) != EOF) {
        if (c == '\t')
            printf("    ");
        else
            putchar(c);
    }
}