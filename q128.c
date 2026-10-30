//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    fp = fopen("text.txt", "r");

    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U') {

            vowels++;
        }

        // Check for consonants
        else if ((ch >= 'a' && ch <= 'z') ||
                 (ch >= 'A' && ch <= 'Z')) {

            consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
