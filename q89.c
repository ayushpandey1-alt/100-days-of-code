//Q89: Count frequency of a given character in a string

#include <stdio.h>

int main()
{
    char str[100], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    printf("Enter character: ");
    scanf("%c", &ch);

    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] == ch)
        {
            count++;
        }

        i++;
    }

    printf("%d", count);

    return 0;
}

