// Write a C program that defines a function to print only odd elements from 1D array elements.
#include <stdio.h>

void main()
{
    int i, n; // variable declaration

    printf("Enter Size of 1D Array :  "); // user input message
    scanf("%d", &n);                      // user input
    int a[n];                             // array declaration

    printf("\nEnter Elements Of Array :\n"); // user input message
    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] = ", i); // user input message
        scanf("%d", &a[i]);          // user input
    }
    // display 1d array
    printf("\nThe Odd Elements are "); // output
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 3)
        {
            printf("%d ", a[i]);
        }
    }
}
