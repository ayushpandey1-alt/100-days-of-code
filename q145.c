//Q145: Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

// Function returns the structure of the top student
struct Student findTopper(struct Student s[], int n) {
    int topper = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topper].marks) {
            topper = i;
        }
    }

    return s[topper];
}

int main() {
    struct Student s[3];
    struct Student top;

    // Input
    for (int i = 0; i < 3; i++) {
        printf("Enter name, roll and marks: ");
        scanf("%s %d %d",
              s[i].name,
              &s[i].roll_no,
              &s[i].marks);
    }

    // Function returns a Student structure
    top = findTopper(s, 3);

    // Output
    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           top.name, top.roll_no, top.marks);

    return 0;
}
