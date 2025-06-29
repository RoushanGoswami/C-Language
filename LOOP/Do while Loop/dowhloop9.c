#include<stdio.h>

int main()
{
    // wap to calculate the factorials of n using do while Loop 
int i = 1 , fact = 1 ;     
 int n ;
 printf("Enter n :");   
 scanf("%d",&n);
   do {
   fact = fact * i ;
   i++;
   } while (i<=n);
    printf("factorial is %d",fact);
}