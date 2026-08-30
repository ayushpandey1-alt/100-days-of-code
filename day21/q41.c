//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int n, first, last, middle, temp, place = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;       // store last digit

    temp = n;

    while(temp >= 10) {
        temp = temp / 10;
        place = place * 10;
    }

    first = temp;        // store first digit

    middle = (n % place) / 10;

    result = last * place + middle * 10 + first;

    printf("After swapping = %d", result);

    return 0;
}