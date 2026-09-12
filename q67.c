//Insert an element in an array at a given position.
#include <stdio.h>

int main()
{
    int n, i, pos, value;
    int arr[100];

    scanf("%d", &n);

    // Input array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input position and value
    scanf("%d %d", &pos, &value);

    // Shift elements to the right
    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the value
    arr[pos - 1] = value;

    n++;

    // Print array
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
