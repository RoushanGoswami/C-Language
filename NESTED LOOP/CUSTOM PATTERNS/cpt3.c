#include<stdio.h>

int main()
{
    int i,j,k,l;
    for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        for(k=i; k<5; k++)
        {
            printf("    ");
        }
        for(l=i; l>=1; l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
}
