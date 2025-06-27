#include<stdio.h>
#include<conio.h>

void main ()

{
	//wap to print multiplication table of N using while loop
	
	int i = 1; //declared a variable i=1 start point
    int n;//declare a variable n
	printf("Enter n : ");//user input message
	scanf("%d",&n);//user input
	
	while (i <= 10)//end point n ,condition
    {
    	printf("%d * %d = %d\n",n,i,n*i);//final output --->print
    	i++;//increment
	}	
	   
}

