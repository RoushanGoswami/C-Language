#include<stdio.h>

int main()
{
//wap to print odd number from 1 to n using do.. while Loop 
int i = 1 ;
int n ;
printf("Enter n :");
scanf("%d",&n);

do{
if(i%2==1)
printf("%d\n",i);
i++;

}while(i<=n);

}