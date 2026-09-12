//Q68: Delete an element from an array.

#include <stdio.h>

int main()
{
    int n, i, pos;
    int arr[100];

    scanf("%d", &n);

    // Input array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Position to delete
    scanf("%d", &pos);

    // Shift elements to the left
    for(i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    // Print array
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
