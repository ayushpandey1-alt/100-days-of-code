//Q98: Print initials of a name with the surname displayed in full

#include <stdio.h>

int main()
{
    char str[100];
    int i, last = 0;

    printf("Enter your name: ");
    fgets(str, 100, stdin);

    // Print first initial
    printf("%c.", str[0]);

    // Find initials and last word
    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            // Check if this is not the last space
            if (str[i + 1] != '\n' && str[i + 1] != '\0')
            {
                printf("%c.", str[i + 1]);
                last = i + 1;
            }
        }
    }

    // Find the surname
    i = last;

    while (str[i] != '\n' && str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }

    return 0;
}
