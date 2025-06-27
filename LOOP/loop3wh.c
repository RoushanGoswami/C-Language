#include<stdio.h>
#include<conio.h>

void main ()

{
	//wap to print from 1 to N using while loop
	
	int i = 1; //declared a variable i =1 start point
    int n;
	printf("Enter n : ");//user input message
	scanf("%d",&n);//user input
	while (i <= n)//end point n ,condition
    {
    	
    	printf("%d\n",i);//final output --->print
    	i++;
	}	
}

