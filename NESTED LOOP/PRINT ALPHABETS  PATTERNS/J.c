// * * * * *
//     *
//     *
//     *
//     *
// *   *
//  * *

#include <stdio.h>
void main()
{

    int i, j;

    for (i = 1; i <= 7; i++)
    {

        for (j = 1; j <= 6; j++)
        {
            if ((i == 1) || (i != 7 && j == 4))
            {
                printf("* ");
            }
            else if (i == 6 && j == 1)
            {
                printf("* ");
            }
            else if ((i == 7) && (j == 2 || j == 3))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}