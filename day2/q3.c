//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main (){
    int l , b ,area, peri;
    
    printf("enter length : ");
    scanf("%d", &l);

    printf("enter breadth : ");
    scanf("%d", &b);

    area = l * b ; // area of rectangle 
    printf("Area of rectangle %d and %d: %d \n", l,b,area);

    peri = 2 * (l + b); // perimeter of rectangle 
    printf("Perimeter of rectangle %d and %d: %d \n", l,b,peri);

     return 0;
}