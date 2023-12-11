/* Assignment 3 problem 1 - Store marks obtained by students in an array.
Find if there is more than one student who scored
same marks. Assume minimum marks obtained
is 30 and maximum marks obtained is 85.*/

#include <stdio.h>

int main() {
    // Constants for minimum and maximum marks
    const int MIN_MARKS = 30;
    const int MAX_MARKS = 85;

    int numStudents;

    // Get the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Check if the number of students is valid
    if (numStudents <= 0) {
        printf("Invalid number of students. Exiting program.\n");
        return 1;
    }

    
    int marks[numStudents];

    // Read marks from the user ok
    printf("Enter the marks of students:\n");
    for (int i = 0; i < numStudents; ++i) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Check if marks are within the valid range
        if (marks[i] < MIN_MARKS || marks[i] > MAX_MARKS) {
            printf("Invalid marks. Marks should be between %d and %d.\n", MIN_MARKS, MAX_MARKS);
            return 1;
        }
    }

    // Check for students with the same marks
    int foundDuplicate = 0;
    for (int i = 0; i < numStudents - 1; ++i) {
        for (int j = i + 1; j < numStudents; ++j) {
            if (marks[i] == marks[j]) {
                foundDuplicate = 1;
                printf("Students %d and %d scored the same marks: %d\n", i + 1, j + 1, marks[i]);
            }
        }
    }

    if (!foundDuplicate) {
        printf("No students scored the same marks.\n");
    }

    return 0;
}