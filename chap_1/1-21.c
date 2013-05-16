#include <stdio.h>
#define IN 1
#define OUT 0
#define TAB_TO_SPACES 4

// ``entab.c``
// Replace strings of blanks by min number of tabs and blanks to acheive same spacing

main() {
    char c;
    int state, i, j, numTabs, numSpaces;
    i = 0;
    while((c = getchar()) != EOF) {
        if (c == ' ') {
            if (state == OUT) { // if space found and state is OUT, set state in and initialize counter
                state = IN;
                i = 1;
            } else { // if space found and state in already IN, increment counter
                ++i;
            }
        } else { // if space NOT found, set state to OUT
            state = OUT;
            if (i > 0) { // if counter is set, do "space to tab" processing
                numTabs = i / TAB_TO_SPACES;
                numSpaces = i % TAB_TO_SPACES;
                for (j=0;j<numTabs;j++)
                    putchar('\t');
                for (j=0;j<numSpaces;j++)
                    putchar(' ');
                i = 0; // reset counter
            }
            putchar(c);
        }
    }
}