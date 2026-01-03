#include <stdio.h>

int main()
{
    int choice;
    int i;

    /* -------- IF / ELSE -------- */
    int number = 7;

    if (number > 0)
        printf("IF: %d is positive\n", number);
    else if (number < 0)
        printf("IF: %d is negative\n", number);
    else
        printf("IF: number is zero\n");

    /* -------- SWITCH -------- */
    choice = 2;

    switch (choice)
    {
        case 1:
            printf("SWITCH: Choice is 1\n");
            break;
        case 2:
            printf("SWITCH: Choice is 2\n");
            break;
        case 3:
            printf("SWITCH: Choice is 3\n");
            break;
        default:
            printf("SWITCH: Invalid choice\n");
    }

    /* -------- FOR LOOP -------- */
    printf("FOR LOOP: ");
    for (i = 1; i <= 5; i++)
        printf("%d ", i);
    printf("\n");

    /* -------- WHILE LOOP -------- */
    printf("WHILE LOOP: ");
    i = 1;
    while (i <= 5)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    /* -------- DO-WHILE LOOP -------- */
    printf("DO-WHILE LOOP: ");
    i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n");

    return 0;
}
