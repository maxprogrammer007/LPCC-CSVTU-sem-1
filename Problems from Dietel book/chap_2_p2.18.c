/* problem statement -
Write a program that asks the user to enter the highest rainfall ever in
one season for a country, and the rainfall in the current year for that country, obtains the values from
the user, checks if the current rainfall exceed the highest rainfall and prints an appropriate message
on the screen. If the current rainfall is higher, it assigns that value as the highest rainfall ever. Use
only the single-selection form of the if statement you learned in this chapter
*/

#include<stdio.h>

int main () {
    int max_rf , max_crf; // max_rf = maximum rainfall ever and max_crf = maximum rainfall in the current season
    puts("Enter the highest rainfall ever recorded : ");
    scanf("%d",&max_rf);
    puts("Enter the current highest rainfall recorded this season :");
    scanf("%d",&max_crf);
    if (max_crf > max_rf)
    {
        printf("%s","This year the highest ever rainfall has been recorded breaking all the previous records");
    }
    else
    printf("%s","This was yet another season the records are still on ");

    return 0;
    
}