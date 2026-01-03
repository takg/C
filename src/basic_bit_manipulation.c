#include <stdio.h>

/* Set the bit at position pos (0-based) */
int setBit(int num, int pos)
{
    return num | (1 << pos);
}

/* Clear the bit at position pos */
int clearBit(int num, int pos)
{
    return num & ~(1 << pos);
}

/* Toggle the bit at position pos */
int toggleBit(int num, int pos)
{
    return num ^ (1 << pos);
}

/* Check if the bit at position pos is set */
int checkBit(int num, int pos)
{
    return (num & (1 << pos)) != 0;
}

/* Print binary representation */
void printBinary(unsigned int num)
{
    for (int i = 31; i >= 0; i--)
        printf("%d", (num >> i) & 1);
    printf("\n");
}

int main()
{
    int num = 10;   // 1010 in binary
    int pos = 1;

    printf("Original number: %d\n", num);
    printf("Binary: ");
    printBinary(num);

    num = setBit(num, pos);
    printf("\nAfter setting bit %d: %d\n", pos, num);
    printBinary(num);

    num = clearBit(num, pos);
    printf("\nAfter clearing bit %d: %d\n", pos, num);
    printBinary(num);

    num = toggleBit(num, pos);
    printf("\nAfter toggling bit %d: %d\n", pos, num);
    printBinary(num);

    printf("\nCheck bit %d: %s\n", pos,
           checkBit(num, pos) ? "SET" : "NOT SET");

    printf("\nLeft shift by 1: %d\n", num << 1);
    printf("Right shift by 1: %d\n", num >> 1);

    return 0;
}
