//Q96: Reverse each word in a sentence without changing the word order

#include <stdio.h>

int main()
{
    char str[100];
    int i, start = 0, end;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            end = i - 1;

            while (start <= end)
            {
                printf("%c", str[end]);
                end--;
            }

            if (str[i] == ' ')
                printf(" ");

            start = i + 1;
        }
    }

    return 0;
}
