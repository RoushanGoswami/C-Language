#include<stdio.h>
#include<conio.h>

void main ()

{
	//wap to print from N to 1 using while loop
	
	int n ; //declared a variable , n start point
	printf("Enter n : ");//user input message
	scanf("%d",&n);//user input
	while (n >= 1)//end point n ,condition
    {
    	
    	printf("%d\n",n);//final output --->print
    	n--;
	}	
}

