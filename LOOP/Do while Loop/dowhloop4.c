#include<stdio.h>

int main()
{

//wap to print from n to 1 using do while Loop 
int n;
int i = 1;//end point i = 1 
printf("Enter n :");
scanf("%d",&n);
do
{
printf("%d\n",n);
n--;
}while(n>=i);

}