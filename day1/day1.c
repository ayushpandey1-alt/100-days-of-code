//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    int a , b,sum=0,diff=0 ,prod=0, quo=0;
   
    printf("Enter two number: ");
    scanf("%d %d", &a, &b); //input 2 numbers
    
    sum = a + b; // adds two number
    printf("Sum of %d and %d: %d \n", a,b,sum); 

    diff = a - b; //  sub number
    printf("Diff of %d and %d: %d \n", a,b,diff);

    prod = a * b; //  multiply number
    printf("Product of %d and %d: %d \n", a,b,prod);

    quo = a/b; // divide number
    printf("Quotient of %d and %d : %d" ,a,b,quo);
    

    return 0;
}