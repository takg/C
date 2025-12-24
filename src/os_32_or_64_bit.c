#include <stdio.h>

int main() {
    if (sizeof(void*) == 8) {
        printf("This is a 64-bit OS\n");
    } else if (sizeof(void*) == 4) {
        printf("This is a 32-bit OS\n");
    } else {
        printf("Unknown architecture\n");
    }

    printf("Size of void* = %zu bytes\n", sizeof(void*));
    return 0;
}
