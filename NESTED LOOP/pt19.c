// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
#include <stdio.h>

void main()
{
    int i, j, num = 1; // declared two variables i and j
    
    for (i = 1; i <= 5; i++)
    {

        for (j = i; j >= 1; j--)
        {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }
}