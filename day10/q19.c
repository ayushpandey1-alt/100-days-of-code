// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths
#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Classification
    if (a == b && b == c)
    {
        printf("It is an Equilateral Triangle.\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("It is an Isosceles Triangle.\n");
    }
    else
    {
        printf("It is a Scalene Triangle.\n");
    }

    return 0;
}