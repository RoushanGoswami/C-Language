#include<stdio.h>
#include<conio.h>

void main ()

{
	//wap to print sum from 1 to N using while loop
	
	int i = 1, sum = 1; //declared a variable i=1 start point and sum = 1
    int n;//declare a variable n
	printf("Enter n : ");//user input message
	scanf("%d",&n);//user input
	
	while (i<= n)//end point n ,condition
    {
    	sum = sum * i ;
    	i++;//increment
	}	
	printf("Factorial is %d\n",sum);//final output --->print
}

