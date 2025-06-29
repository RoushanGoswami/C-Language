#include<stdio.h>

int main()
{
    //wap to print the multiplication table of n using for loop 
    int n , i ;
    
    printf("Enter n :");
   scanf("%d",&n); 
   
   for (i = 1, n ; i<=10 ; i++)
   {
   printf("%d * %d = %d\n", n ,i ,n * i);
   
   } 
    
}