//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");

    int result = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        result = result ^ arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        result = result ^ i;
    }

    printf("Repeated element = %d", result);

    return 0;
}
