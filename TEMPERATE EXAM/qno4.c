#include <stdio.h>

void main()

{
    // Write C program to find sum of first and last digit of a number.
    int num, fd = 0, ld;

    printf("Enter the Number :"); // user input message
    scanf("%d", &num);            // user input
    ld = num % 10;                // last digit is identified here
    while (num > 0)
    {
    
        num = num / 10; // last digit will be removed here
        fd = fd + num;                                                     // value of first digit and num will be added here and will be assigned to fd

    }

    printf("sum of first and last digit : %d+%d=%d", fd, ld, fd + ld); // final output
}