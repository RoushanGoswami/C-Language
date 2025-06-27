#include<stdio.h>
#include<conio.h>

void main ()

{
	//wap to print odd no. from 1 to N using while loop
	
	int num = 1; //declared a variable num=1 start point
    int n;
	printf("Enter n : ");//user input message
	scanf("%d",&n);//user input
	
	while (num <= n)//end point n ,condition
    {
    	if(num%2==1)//odd no 
    	printf("%d\n",num);//final output --->print
    	num++;//increment
	}	
}

