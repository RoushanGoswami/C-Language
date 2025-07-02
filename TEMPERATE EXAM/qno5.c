#include <stdio.h>

void main()

{
    // Write C program to calculate factorial of a number.
    int num, i = 1, fact = 1;

    printf("Enter the number :"); // user input message
    scanf("%d", &num);            // user input

    while (num >= i) // while condition
    {
        fact = fact * num; // fact*=num
        num--;             // decrement in num
    }
    printf("factoial of the number is : %d", fact);
}