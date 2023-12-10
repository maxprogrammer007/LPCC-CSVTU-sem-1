#include <stdio.h>

int main() {
    int numStudents;

    // yaha se number of students lenge 
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Check krenge ki number of students valid hai ki nahi 
    if (numStudents <= 0) {
        printf("Invalid number of students. Exiting program.\n");
        return 1;
    }

    // yaha array declare krrhe age store krne ke liye 
    float ages[numStudents];

    // Read ages 
    printf("Enter the ages of students:\n");
    for (int i = 0; i < numStudents; ++i) {
        printf("Student %d: ", i + 1);
        scanf("%f", &ages[i]);
    }

    // Calculate average age
    float sum = 0;
    for (int i = 0; i < numStudents; ++i) {
        sum += ages[i];
    }
    float average = sum / numStudents;

    // Max aur min age find karo
    float minAge = ages[0];
    float maxAge = ages[0];
    for (int i = 1; i < numStudents; ++i) {
        if (ages[i] < minAge) {
            minAge = ages[i];
        }
        if (ages[i] > maxAge) {
            maxAge = ages[i];
        }
    }

    // yaha display Kara rahe 
    printf("\nAverage Age: %.2f\n", average);
    printf("Minimum Age: %.2f\n", minAge);
    printf("Maximum Age: %.2f\n", maxAge);

    return 0;
}
