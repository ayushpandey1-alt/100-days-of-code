//Q86: Check if a string is a palindrome

#include <stdio.h>

int main()
{
    char str[100], rev[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length
    while (str[length] != '\0')
    {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length; i++)
    {
        rev[i] = str[length - 1 - i];
    }

    rev[length] = '\0';

    // Compare
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != rev[i])
        {
            printf("Not palindrome");
            return 0;
        }
        i++;
    }

    printf("Palindrome");

    return 0;
}
