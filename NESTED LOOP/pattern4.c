#include<stdio.h>

int main()
{
    int i,j;
    for (i = 5;i >=1 ;i--)
    {
    for(j = 5; j>=i ;j--)
    {
    printf("%d ",j);
    }
    printf("\n");
    }
}