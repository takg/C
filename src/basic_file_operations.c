#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char buffer[100];

    /* -------- Writing to a file -------- */
    fp = fopen("example.txt", "w");
    if (fp == NULL)
    {
        perror("File open failed");
        return 1;
    }

    fprintf(fp, "Hello File Handling in C\n");
    fprintf(fp, "This is a safe fgets example\n");
    fprintf(fp, "Reading line by line\n");

    fclose(fp);

    /* -------- Reading from a file using fgets -------- */
    fp = fopen("example.txt", "r");
    if (fp == NULL)
    {
        perror("File open failed");
        return 1;
    }

    printf("Reading file content using fgets:\n");

    /* fgets reads at most sizeof(buffer)-1 characters */
    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(fp);

    return 0;
}
