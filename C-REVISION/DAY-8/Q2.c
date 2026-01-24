#include <stdio.h>

void main()
{
    int i, j, k;
    for (i = 5; i >= 1; i--)
    {
        k = i; // k=5
        for (j = i; j >= 1; j--)
        {

            printf("%d ", k);
            k++;
        }
        printf("\n");
    }

}
