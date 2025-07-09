#include <stdio.h>

void main()
{
    char i, j; // declared two variables i and j

    for (i = 'A'; i <='E'; i++)
    {

        for (j = 'A'; j <= i; j++)
        {
            printf("%c ",j);
        }

        printf("\n");
    }
}