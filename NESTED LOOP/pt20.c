// -
// | -
// - | -
// | - | -
// - | - | -
#include <stdio.h>

void main()
{
    int i, j; // declared two variables i and j

    for (i = 1; i <= 5; i++)
    {

        for (j = i; j >= 1; j--)
        {
            if (j % 2 == 1)
            {
                printf("- ");
            }
            else
            {
                printf("| ");
            }
        }

        printf("\n");
    }
}