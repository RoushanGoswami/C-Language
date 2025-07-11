#include <stdio.h>

void main()
{
    //        5
    //      4 4
    //    3 3 3
    //  2 2 2 2
    // 1 1 1 1 1

    int i, j, k; // declared three variables i,j,k
    for (i = 5; i >= 1; i--)
    {
        for (k = i; k > 1; k--)
        {
            printf("  ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}