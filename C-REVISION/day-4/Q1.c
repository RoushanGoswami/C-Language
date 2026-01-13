#include <stdio.h>

void main()
{
    // A B C D E
    //   A B C D
    //     A B C
    //       A B
    //         A

    char i, j, k;

    for (i = 'A'; i <= 'E'; i++)
    {
        for (k = 'E'; k > i; k--)
        {
            printf("  ");
        }
        for (j = 'A'; j <= i; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
 

}
