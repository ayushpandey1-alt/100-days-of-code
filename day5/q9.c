// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main()
{
    int pri, rate, tim, SI;
    float CI;

    printf("Enter the Principal Value : ");
    scanf("%d", &pri);
    printf("Enter the Rate : ");
    scanf("%d", &rate);
    printf("Enter the Time : ");
    scanf("%d", &tim);

    SI = pri * rate * tim / 100;
    printf("Your Simple Interest is : %d \n", SI);

    CI = pri * pow((1 + rate / 100.0), tim) - pri;
    printf("Your Compund Interest is : %.2f\n ", CI);

    return 0;
}
