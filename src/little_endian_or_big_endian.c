#include <stdio.h>

int main() {
    union {
        unsigned int i;
        unsigned char c;
    } u;

    u.i = 1;

    if (u.c == 1)
        printf("Little Endian\n");
    else
        printf("Big Endian\n");

    return 0;
}
