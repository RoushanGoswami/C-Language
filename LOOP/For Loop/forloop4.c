#include<stdio.h>

int main()
{
    //wap to print from n to 1 using for loop 
    int i ,n ;
    printf("Enter n :");
    scanf("%d",&n);
    
    for(i=1;n>=i;n--)
    {
    printf("%d\n",n);
    }
}