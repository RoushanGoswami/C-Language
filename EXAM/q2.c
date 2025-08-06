// Write a C program to find the average of all elements in a 2D array using a function.
#include <stdio.h>
int avg(int sum, int n)
{

    return sum / n;
}
void main()
{
    int i, j, r, c, n = 0, sum = 0;         // variable declaration
    printf("Enter Number of rows : ");      // user input message
    scanf("%d", &r);                        // user input
    printf("\nEnter Number of columns : "); // user input message
    scanf("%d", &c);                        // user input
    int a[r][c];                            // 2D aarry

    printf("\nEnter elements of 2D array : ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elements of 2D Array A :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
            n++;
        }
        printf("\n");
    }
    // sum
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum = sum + a[i][j]; // sum
        }
    }
    float x = avg(sum, n);
    printf("Average of 2D array Elements is %.2f", x);
}