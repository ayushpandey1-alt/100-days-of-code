//Rotate an array to the right by k positions.

#include <stdio.h>

int main()
{
    int n, k, i, j, temp;
    int arr[100];

    scanf("%d", &n);

    // Input array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    // Rotate right k times
    for(j = 0; j < k; j++)
    {
        temp = arr[n - 1];

        for(i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;
    }

    // Print array
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
