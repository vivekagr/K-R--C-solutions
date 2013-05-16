#include <stdio.h>
#define MAXLINE 1000

// Remove trailing blanks and tabs from each line of input and to delete entirely empty lines

int getlinex(char line[], int maxline);

main() {
    char line[MAXLINE];
    int i, len;

    while ((len = getlinex(line, MAXLINE)) > 0) {
        for (i=len-2; i>=0; i--) { // looping from the back of string
            if (line[i] != ' ' && line[i] != '\t') { // checking for a non white space character
                line[i+1] = '\0'; // cut off trailing space with null char
                break;
            }
        }
        if (i>0) // checking length of the line to prevent printing empty line
            printf("%s\n", line);
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