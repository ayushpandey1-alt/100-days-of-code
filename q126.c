//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.


#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    // Try to open the file in read mode
    fp = fopen(filename, "r");

    // Check whether file opened successfully
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
    } else {
        printf("File opened successfully.\n");

        // Read and display file content
        while ((ch = fgetc(fp)) != EOF) {
            printf("%c", ch);
        }

        fclose(fp);
    }

    return 0;
}
