//Q85: Reverse a string

#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Find length
    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    // Print from last character to first
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
