//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[50];
    char text[200];

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");

    if (fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }

    printf("Enter text to append: ");
    getchar();
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}
