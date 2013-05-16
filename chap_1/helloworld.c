#include <stdio.h>
#include <stdlib.h>
// #include <limits.h>

void show_bytes(char *start, int len) {
    int i;
    for (i = 0; i < len; i++)
        printf("%p\t0x%.2x\n", start+i, *(start+i));
    printf("\n");
}

void show_int (int x) {
    show_bytes((char *) &x, sizeof(int));
}

main()
{
    // printf("hello world!\n");
    // printf("%zu", ULONG_MAX);
    show_int(200);
}