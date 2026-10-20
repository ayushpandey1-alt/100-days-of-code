//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main(){
int n;

printf("Enter size of array: ");
scanf("%d", &n);

int arr[n];

printf("Enter array elements: ");
for (int i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
}

// Expected numbers are 0 to n
int expectedSum = n * (n + 1) / 2;

int actualSum = 0;

for (int i = 0; i < n; i++)
{
    actualSum = actualSum + arr[i];
}

int missing = expectedSum - actualSum;

printf("Missing number = %d", missing);

return 0;

}
