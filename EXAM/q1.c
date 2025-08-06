// Implement a C program to find an average and a grade of a student. Consider 5 subjects.
// Assign out of 100 marks for each subject. Use conditions for evaluate grades based on average value.
#include <stdio.h>

void main()
{
    int maths, sci, eng, hin, ss, sum = 0; // variable declaration
    printf("Enter marks of Maths : ");     // user input message
    scanf("%d", &maths);                   // user input
    printf("\nEnter marks of Science : "); // user input message
    scanf("%d", &sci);                     // user input
    printf("\nEnter marks of English : "); // user input message
    scanf("%d", &eng);                     // user input
    printf("\nEnter marks of hindi : ");   // user input message
    scanf("%d", &hin);                     // user input
    printf("Enter marks of SS : ");        // user input message
    scanf("%d", &ss);                      // user input

    sum = maths + sci + eng + hin + ss; // sum
    printf("Marks = %d\n", sum);

    float avg;
    avg = sum / 5;
    printf(" Average is %.2f", avg);
    if (avg > 90 && avg <= 100)
    {
        printf("\nYour Grade is A");
    }
    else if (avg >= 80 && avg < 90)
    {
        printf("\nYour Grade is B");
    }
    else if (avg > 60 && avg < 80)
    {
        printf("\nYour Grade is C");
    }
    else if (avg >= 50 && avg < 60)
    {
        printf("\nYour Grade is D");
    }
    else
    {
        printf("You are fail !");
    }
}
