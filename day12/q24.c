/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
#include <stdio.h>

int main() {
    int unit, charge;

    printf("Enter your units: ");
    scanf("%d", &unit);

    if (unit < 0) {
        printf("Units cannot be negative.\n");
    } else if (unit <= 100) {
        charge = unit * 5;
        printf("Bill: Rs. %d\n", charge);
    } else if (unit <= 200) {
        charge = (100 * 5) + (unit - 100) * 7;
        printf("Bill: Rs. %d\n", charge);
    } else if (unit <= 300) {
        charge = (100 * 5) + (100 * 7) + (unit - 200) * 10;
        printf("Bill: Rs. %d\n", charge);
    } else {
        charge = (100 * 5) + (100 * 7) + (100 * 10) + (unit - 300) * 12;
        printf("Bill: Rs. %d\n", charge);
    }

    return 0;
}