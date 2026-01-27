#include <stdio.h>

void main()
{
    int i, j;
    char k = 'A';
    for (i = 1; i <= 5; i++)
    {
        k = 'A';
        for (j = 1; j <= i; j++)
        {

            if (i % 2 == 0)
            {
                printf("%c ", k);
                k++;
            }
            else
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

}

