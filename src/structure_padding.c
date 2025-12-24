#include <stdio.h>

struct A {
    char c;     // 1 byte
    int i;      // 4 bytes
    char d;     // 1 byte
};

#pragma pack(1)
struct B {
    char c;     // 1 byte
    int i;      // 4 bytes
    char d;     // 1 byte
};
#pragma pack()

int main() {
    printf("Size of char  : %zu\n", sizeof(char));
    printf("Size of int   : %zu\n", sizeof(int));

    printf("Structure Padding enabled : Size of struct A: %zu\n", sizeof(struct A));
    printf("Structure Padding disabled: Size of struct B: %zu\n", sizeof(struct B));

    return 0;
}
