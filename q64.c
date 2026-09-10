//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    int n, digit;
    int count[10] = {0};
    int max = 0, result = 0;

    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;       // Get last digit
        count[digit]++;       // Increase its count
        n = n / 10;           // Remove last digit
    }

    for(int i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}
