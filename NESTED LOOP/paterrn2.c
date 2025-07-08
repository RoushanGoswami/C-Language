#include <stdio.h>

void main()
{
    int i, j; // declared two variables i and j
    for (i = 1; i <= 5; i++)
    {

        for (j = i; j >= 1; j--)

        {

            printf("%d ", j);
        }
        printf("\n");
    }
}
