#include<stdio.h>
#include<conio.h>

void main ()

{
	//wap to print leap year from 2000 to 3000 using while loop
	
	int start = 2000; //declared a variable start = 2000 start point
	
	while (start <= 3000)//end point 3000  ,condition
    { 
    	printf("%d\n",start);//final output --->print
    	start += 4;//increment of 4 year
	}	
}

