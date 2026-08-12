// Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    float cel, fahr;

    printf("Temperature in Celsius : ");
    scanf("%f", &cel);
    fahr = (cel * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %.2f\n", fahr);
    return 0;
}