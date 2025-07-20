#include<stdio.h>

int main()
{
    int i, j,k,l; //declared variable i, j,k,l
    for (i=5; i>=1; i--)
    {
    for(k=1;k<i;k++)
    {
    printf("  ");
    }
        for (j=i; j<=5; j++)
        {
            printf("%d ",j);
        }
       for(k=4;k>=i;k--)
        {
        printf("%d ",k);
        }
        printf("\n");
    }
}