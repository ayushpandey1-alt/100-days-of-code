// Count positive, negative, odd, even
#include <stdio.h>
int main()
{
    int n, i, pos = 0, neg = 0, odd = 0, even = 0;
    printf("Number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Positive: %d\nNegative: %d\nOdd: %d\nEven: %d\n", pos, neg, odd, even);
    return 0;
}
