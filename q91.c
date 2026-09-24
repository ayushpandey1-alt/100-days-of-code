//Q91: Remove all vowels from a string

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' &&
            str[i] != 'O' && str[i] != 'U')
        {
            printf("%c", str[i]);
        }

        i++;
    }

    return 0;
}
