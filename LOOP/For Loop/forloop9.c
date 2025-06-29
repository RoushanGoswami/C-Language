#include<stdio.h>

int main()
{
    //wap to calculate the factorial of n using for loop 
    int n , fact = 1 , i = 1 ; 
    
    printf("Enter n :");
    scanf("%d",&n);
    
    for (i,n,fact; n >= i ;n--)
    {
    fact = fact * n ;
    
    }
    printf("Factorial is %d",fact);
}