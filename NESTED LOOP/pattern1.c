#include <stdio.h>
void main()
{
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    int i, j;

    for (i = 1; i <= 5; i++) // 2<=5 ,true
    {
        for (j = 1; j <= i; j++) // j=i --> 1<=1--> true
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
