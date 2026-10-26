//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main()
{
    char source[50], destination[50];
    FILE *src, *dest;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", destination);

    src = fopen(source, "r");

    if (src == NULL)
    {
        printf("Source file could not be opened.");
        return 1;
    }

    dest = fopen(destination, "w");

    if (dest == NULL)
    {
        printf("Destination file could not be created.");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s", destination);

    return 0;
}
