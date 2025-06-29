#include<stdio.h>

int main()
{
//wap to print sum from 1 to n using do while Loop 
int i = 1 , sum = 0;
int n ;
printf("Enter n :");
scanf("%d",&n);

do {
sum += i ;
i++;

} while (i<=n);
printf("Sum is %d",sum);


}