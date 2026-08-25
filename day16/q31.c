//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num, remainder, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        remainder = num % 2;
        binary[i] = remainder;
        i++;
        num = num / 2;
    }

    printf("Binary = ");

    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    return 0;
}