#include<stdio.h>
#include<conio.h>

void main ()

{
	//wap to calculate the factorial of N using while loop
	int i = 1 , fact = 1 ;//declared a variable i =1 , and fact = 1 , start point 1 
	int n ; //declare a variable
	
	printf("Enter N :");//user input message 
	scanf("%d",&n);//user input
	
while (n >= i)//while loop condition for ending point 
{
	fact = fact * n ; // or  fact*=n
	n--;// decrement in n
}
printf("factorial is %d ",fact);// final output 
}
