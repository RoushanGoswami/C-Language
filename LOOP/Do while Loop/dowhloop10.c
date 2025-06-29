#include<stdio.h>

int main()
{
    // wap to print the multiplication table of n using do while Loop 
    int n , i = 1 ;
    printf("Enter n :");
    scanf("%d",&n);
    
    do {
    printf("%d * %d = %d\n",n,i,n * i);
    i++;
    } while (i<=10);
    
    
}