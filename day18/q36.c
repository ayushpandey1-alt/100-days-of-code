//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main()
{
    int a, b, i, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF = %d", hcf);

    return 0;
}


/*

// using Euclidean Algorithm
//
#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF = %d", a);

    return 0;
}*/