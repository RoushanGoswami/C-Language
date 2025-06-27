#include<stdio.h>
#include<conio.h>

void main ()

{
	//wap to print even no. from n to 1 using while loop
	
    int n; //declared a variable n start point
  
	printf("Enter n : ");//user input message
	scanf("%d",&n);//user input
	//n= 10---> 9 7 5 3 1 
	while (n>= 1)//end point n ,condition
    {
    	if(n%2==0)//even no 
    	printf("%d\n",n);//final output --->print
    	n--;//decrement
	}	
}

