#include <stdio.h>
#include <string.h>

int main()
{
    int i;

    /* ================== ARRAYS ================== */

    /* 1D Integer Array */
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("Array Elements:\n");
    for (i = 0; i < 5; i++)
        printf("numbers[%d] = %d\n", i, numbers[i]);

    /* Array size calculation */
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("\nArray size = %d\n", size);

    /* ================== STRINGS ================== */

    /* String using character array */
    char str1[] = "Hello";
    char str2[20];

    /* Copy string */
    strcpy(str2, str1);

    printf("\nStrings:\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    /* String length */
    printf("Length of str1 = %lu\n", strlen(str1));

    /* String concatenation */
    strcat(str2, " World");
    printf("After concatenation: %s\n", str2);

    /* String comparison */
    if (strcmp(str1, "Hello") == 0)
        printf("str1 is equal to \"Hello\"\n");

    /* Character-by-character access */
    printf("\nCharacters in str1:\n");
    for (i = 0; str1[i] != '\0'; i++)
        printf("%c ", str1[i]);

    printf("\n");

    return 0;
}
