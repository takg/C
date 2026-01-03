#include <stdio.h>

int main()
{
    int age;
    float salary;
    char name[50];

    /* Input */
    printf("Enter your name: ");
    scanf("%49s", name);   // reads a single word

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your salary: ");
    scanf("%f", &salary);

    /* Output */
    printf("\n--- User Details ---\n");
    printf("Name   : %s\n", name);
    printf("Age    : %d\n", age);
    printf("Salary : %.2f\n", salary);

    return 0;
}
