#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;   // points to first element

    printf("Array base address      : %p\n", (void *)arr);
    printf("Pointer initial address : %p\n\n", (void *)ptr);

    /* -------- Pointer Increment -------- */
    printf("Pointer Increment:\n");
    printf("*ptr = %d\n", *ptr);

    ptr++;   // moves to next integer element
    printf("After ptr++\n");
    printf("Address: %p, Value: %d\n\n", (void *)ptr, *ptr);

    /* -------- Pointer Decrement -------- */
    ptr--;   // moves back
    printf("After ptr--\n");
    printf("Address: %p, Value: %d\n\n", (void *)ptr, *ptr);

    /* -------- Accessing array using pointer arithmetic -------- */
    printf("Access array using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("*(arr + %d) = %d\n", i, *(arr + i));
    }

    /* -------- Difference between addresses -------- */
    printf("\nAddress difference:\n");
    printf("&arr[0] = %p\n", (void *)&arr[0]);
    printf("&arr[1] = %p\n", (void *)&arr[1]);

    printf("Difference in bytes = %ld\n",
           (char *)&arr[1] - (char *)&arr[0]);

    return 0;
}
