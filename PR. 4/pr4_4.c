#include<stdio.h>

int main()
{
    int i ,j,k ;// declared variable i , j 
    for (i=5;i>=1;i--)
    {
    for(k=5;k>i;k--)
    {
    printf("  ");
    }
    for (j=1;j<=i;j++)
    {
    if(j%2==1)
    {
    printf("1 ");
    }
    else
    {
    printf("0 ");
    }
    }
    printf("\n");
    }
    
}