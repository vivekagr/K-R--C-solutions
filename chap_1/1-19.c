#include <stdio.h>
#define MAXLINE 1000

// Write a function `reverse` that reverses the character strings.
// Use it to reverse the input a line at a time.

void reverse(char string[], int len);
int getlinex(char line[], int maxline);

main() {
    int len;
    char line[MAXLINE];
    while ((len = getlinex(line, MAXLINE)) > 0) {
        reverse(line, len-1); // -1 to negate the '\n' presence
        printf("%s", line);
    }
}

void reverse(char string[], int len) {
    int i, j;
    char temp;
    for (i=0, j=len-1; i<= j; ++i, --j) { // (len-1) since it contains '\0'
        temp = string[i];
        string[i]= string[j];
        string[j] = temp;
    }
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