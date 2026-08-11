//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main (){
    float r ,area, cir;
    
    printf("enter Radius : ");
    scanf("%f", &r);

    area = 3.14 * r * r ; // area of circle
    printf("Area of Circle %.0f : %.2f \n", r, area);

    cir = 2 * 3.14 * r; // circumference of circle
    printf("Circumference of Circle %.0f : %.2f \n", r,cir);

     return 0;
}