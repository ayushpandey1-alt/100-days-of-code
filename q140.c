//Q140: Define a struct with enum Gender and print person's gender

#include <stdio.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person person;

    person.gender = MALE;

    if (person.gender == MALE) {
        printf("Male\n");
    }
    else if (person.gender == FEMALE) {
        printf("Female\n");
    }

    return 0;
}
