#include <stdio.h>

/* -------- Call by Value -------- */
void callByValue(int x)
{
    x = x + 10;
    printf("Inside callByValue: x = %d\n", x);
}

/* -------- Call by Reference -------- */
void callByReference(int *x)
{
    *x = *x + 10;
    printf("Inside callByReference: x = %d\n", *x);
}

int main()
{
    int a = 10;
    int b = 10;

    printf("Before callByValue: a = %d\n", a);
    callByValue(a);
    printf("After callByValue : a = %d\n\n", a);

    printf("Before callByReference: b = %d\n", b);
    callByReference(&b);
    printf("After callByReference : b = %d\n", b);

    return 0;
}
