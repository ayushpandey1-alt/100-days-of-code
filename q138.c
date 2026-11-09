//Q138: Print all enum names and integer values using a loop.


#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN
};

int main() {

    const char *names[] = {"RED", "YELLOW", "GREEN"};

    for (int i = 0; i < 3; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}
