#include<stdio.h>

int main()
{
    int i,j,k;

    for (i=1; i<=5; i++)
    {
        for(k=5 ;k>i ;k--)
        {
            printf("  ");
        }
        for(j=i; j>=1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}