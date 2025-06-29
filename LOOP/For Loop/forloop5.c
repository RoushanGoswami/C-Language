#include<stdio.h>

int main()
{
//wap to print odd numbers from 1 to n using for loop
    int i, n ;
    printf("Enter n :");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        if(i%2==1)
            printf("%d\n",i);
    }




}