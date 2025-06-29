#include<stdio.h>

int main()
{
//wap to print Even number from n to 1 using do while Loop 
int n;
int i = 1;
printf("Enter n :");
scanf("%d",&n);
do 
{
if(n%2==0)
printf("%d\n",n);
n--;
} while (n>=i);


}