//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum Status result;

    printf("Enter status (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    scanf("%d", &result);

    switch (result)
    {
        case SUCCESS:
            printf("Operation successful");
            break;

        case FAILURE:
            printf("Operation failed");
            break;

        case TIMEOUT:
            printf("Operation timed out");
            break;

        default:
            printf("Invalid status");
    }

    return 0;
}
