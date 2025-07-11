#include <stdio.h>
void main()

// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1
{
    int i, j, k; // declared three variables i , j ,k
    for (i = 5; i >= 1; i--)
    {
        for (k = i; k > 1; k--)
        {
            printf("  ");
        }
        for (j = 5; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
