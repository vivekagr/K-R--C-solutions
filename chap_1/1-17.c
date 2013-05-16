#include <stdio.h>
#define MAXLINE 1000

// Print all input lines that are longer than 80 characters

int getlinex(char line[], int maxline);

main() {
    char line[MAXLINE];
    int len;

    while ((len = getlinex(line, MAXLINE)) > 0)
        if (len > 80)
            printf("%s", line);

    return 0;
}

int getlinex(char s[], int lim) {
    int i;
    char c;

    for (i=0; i<lim-1 && (c = getchar()) != EOF && c!= '\n'; i++)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}