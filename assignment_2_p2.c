/* Assignment 2 problem 2 - A six faced die is rolled 600 times. Find the
frequency of the occurrence of each face?*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Declare an array to store the frequency of each face
    int frequency[6] = {0};

    // Simulate rolling the die 600 times
    for (int i = 0; i < 600; ++i) {
        // Generate a random number between 1 and 6 to represent the die face
        int face = rand() % 6 + 1;

        // Increment the corresponding frequency counter
        frequency[face - 1]++;
    }

    // Display the results
    printf("Face\tFrequency\n");
    for (int i = 0; i < 6; ++i) {
        printf("%d\t%d\n", i + 1, frequency[i]);
    }

    return 0;
}