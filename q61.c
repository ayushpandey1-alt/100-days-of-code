//Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, search;
    int arr[100];
    int found = 0;
    printf("Enter the array : ");
    scanf("%d", &n);

    // Input
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &search);

    // Linear search
    for(i = 0; i < n; i++) {

        if(arr[i] == search) {
            printf("Element found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Element not found");
    }

    return 0;
}
