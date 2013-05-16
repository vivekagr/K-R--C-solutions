#include <stdio.h>

// Count blanks, tabs and newlines

main() {
    int count, c;
    count = 0;
    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n')
            ++count;
    }
    printf("%d\n", count);
}