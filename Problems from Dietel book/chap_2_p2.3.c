/* problem statement :-
Write a single C statement to accomplish each of the following:
a) Define the variables c, thisVariable, q76354 and number to be of type int.
b) Prompt the user to enter an integer. End your prompting message with a colon (:) followed by a space and leave the cursor positioned after the space.
c) Read an integer from the keyboard and store the value entered in integer variable c.
d) If number is not equal to 7, print "The variable number is not equal to 7."
e) Print the message "This is a C program." on one line.
f) Print the message "This is a C program." on two lines so that the first line ends with C. 
g) Print the message "This is a C program." with each word on a separate line.
h) Print the message "This is a C program." with the words separated by tabs. */

//solution

#include<stdio.h>

int main() {
    int c,thisVariable,q76354,number;
    printf("Enter any integer : ");
    scanf("%d",&c);
    if(number != 7){ printf("%s","The Variable is not equal to 7\n");}
    puts("This is a C program");
    puts("This is C");
    puts("Program");
    printf("This\n is\n a\n C\n program\n");
    printf("This\t is\t a\t c\t program\t ");
    
}