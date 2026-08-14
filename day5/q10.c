// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main()
{
    int time, hours, min, sec;

    printf("Enter time in seconds: ");
    scanf("%d", &time);

    hours = time / 3600;
    min = (time % 3600) / 60;
    sec = time % 60;

    printf("%d:%d:%d", hours, min, sec);

    return 0;
}
