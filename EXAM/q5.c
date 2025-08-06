// Print a below pattern using nested for loop in C language:
// _ _ _ _ 10
// _ _ _ 9 10
// _ _ 8 9 10
// _ 7 8 9 10
// 6 7 8 9 10
#include <stdio.h>

void main()
{
    int i, j, k; // variable declaration
    for (i = 10; i >= 6; i--)
    {
        for (k = i; k > 6; k--)
        {

            printf("_ "); // print out
        }

        for (j = i; j <= 10; j++)
        {
            printf("%d ", j); // print out
        }
        printf("\n"); // new line
    }
}
