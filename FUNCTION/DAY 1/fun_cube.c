// wap to find cube of any number using function, cube(5)
#include<stdio.h>
//int cube(); // function cube is declared here 
int cube ()// function cube is defined here
{
int n;// here n variable is declared
printf("Enter The Number:");
scanf("%d",&n);
printf("Cube of given number is %d",n*n*n);
}
int main()
{
cube();
}