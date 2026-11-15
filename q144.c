//Q144: Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

// Function accepting structure as parameter
void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n",
           s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;

    printf("Enter name, roll number and marks: ");
    scanf("%s %d %d", s.name, &s.roll_no, &s.marks);

    // Passing structure to function
    display(s);

    return 0;
}
