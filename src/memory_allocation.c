#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    /* ---------- malloc ---------- */
    int *arr1 = (int *)malloc(5 * sizeof(int));
    if (arr1 == NULL)
    {
        printf("malloc failed\n");
        return 1;
    }

    for (i = 0; i < 5; i++)
        arr1[i] = i + 1;

    printf("malloc values: ");
    for (i = 0; i < 5; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    /* ---------- calloc ---------- */
    int *arr2 = (int *)calloc(5, sizeof(int));
    if (arr2 == NULL)
    {
        printf("calloc failed\n");
        free(arr1);
        return 1;
    }

    printf("calloc values (default initialized): ");
    for (i = 0; i < 5; i++)
        printf("%d ", arr2[i]);   // all zeros
    printf("\n");

    /* ---------- realloc ---------- */
    arr1 = (int *)realloc(arr1, 8 * sizeof(int));
    if (arr1 == NULL)
    {
        printf("realloc failed\n");
        free(arr2);
        return 1;
    }

    for (i = 5; i < 8; i++)
        arr1[i] = i + 1;

    printf("realloc values (resized array): ");
    for (i = 0; i < 8; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    /* ---------- free ---------- */
    free(arr1);
    free(arr2);

    return 0;
}
