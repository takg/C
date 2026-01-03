#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr = arr;      // same as &arr[0]
    int i;

    printf("Array name vs Pointer:\n");
    printf("arr        = %p\n", (void *)arr);
    printf("&arr[0]    = %p\n", (void *)&arr[0]);
    printf("ptr        = %p\n\n", (void *)ptr);

    /* -------- Access using array notation -------- */
    printf("Access using array notation:\n");
    for (i = 0; i < 5; i++)
        printf("arr[%d] = %d\n", i, arr[i]);

    /* -------- Access using pointer notation -------- */
    printf("\nAccess using pointer notation:\n");
    for (i = 0; i < 5; i++)
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));

    /* -------- arr[i] == *(arr + i) -------- */
    printf("\narr[i] == *(arr + i) demonstration:\n");
    for (i = 0; i < 5; i++)
        printf("arr[%d] = %d, *(arr + %d) = %d\n",
               i, arr[i], i, *(arr + i));

    /* -------- Pointer increment -------- */
    printf("\nPointer increment example:\n");
    printf("ptr points to %p, value = %d\n",
           (void *)ptr, *ptr);

    ptr++;   // moves to next array element
    printf("After ptr++\n");
    printf("ptr points to %p, value = %d\n",
           (void *)ptr, *ptr);

    return 0;
}
