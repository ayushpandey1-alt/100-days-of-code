//Q100: Print all sub-strings of a string

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k, first = 1;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i; str[j] != '\0'; j++)
        {
            if (first == 0)
                printf(",");

            for (k = i; k <= j; k++)
                printf("%c", str[k]);

            first = 0;
        }
    }

    return 0;
}
