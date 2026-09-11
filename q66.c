//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main()
{
    int n, i, value;
    int arr[100];

    scanf("%d", &n);

    // Input sorted array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Element to insert
    scanf("%d", &value);

    // Find position and shift elements
    i = n - 1;

    while(i >= 0 && arr[i] > value)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = value;
    n++;

    // Print array
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
