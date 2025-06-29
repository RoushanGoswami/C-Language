#include<stdio.h>

int main()
{
//wap to print sum from 1 to n using for loop 
int i = 1 , n ;
int sum = 0 ;

printf("Enter n :");
scanf("%d",&n);

for( i , n ,sum ; i <= n ; i++)
{
sum = sum + i ; 
}
printf("sum is %d",sum);
}