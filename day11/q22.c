//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, percentage;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;        //Percentage = (Profit or Loss / Cost price) × 100
        printf("Profit percentage = %.2f%%\n", percentage);
    } 
    else if (sellingPrice < costPrice) {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss percentage = %.2f%%\n", percentage);
    } 
    else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
