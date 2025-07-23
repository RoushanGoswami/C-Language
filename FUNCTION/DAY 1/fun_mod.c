// wap to perform all arithmatic operation using function.
#include<stdio.h>
//int sum(void);// fun declaration
int sum()// sum function is defined here
{
int a,b;// variables declared a,b here
printf("Enter A:");//user input message 
scanf("%d",&a);// user input
printf("Enter B:");//user input message 
scanf("%d",&b);// user input
printf("Sum is %d\n\n",a+b);
}
int sub()//sub function defined here  
{
int a,b;// variables declared a,b here
printf("Enter A:");//user input message 
scanf("%d",&a);// user input
printf("Enter B:");//user input message 
scanf("%d",&b);// user input
printf("Their difference is %d\n\n",a-b);
}
int prod()//prod function defined here  
{
int a,b;// variables declared a,b here
printf("Enter A:");//user input message 
scanf("%d",&a);// user input
printf("Enter B:");//user input message 
scanf("%d",&b);// user input
printf("Product of given number is %d\n\n",a*b);
}
int div()//div function defined here  
{
int a,b;// variables declared a,b here
printf("Enter A:");//user input message 
scanf("%d",&a);// user input
printf("Enter B:");//user input message 
scanf("%d",&b);// user input
printf("Quotient of given number is %d\n\n",a/b);
}

int mod()//mod function defined here  
{
int a,b;// variables declared a,b here
printf("Enter A:");//user input message 
scanf("%d",&a);// user input
printf("Enter B:");//user input message 
scanf("%d",&b);// user input
printf("Remainder of given problem is %d\n\n",a%b);
}
int main()
{
sum();//sum fun is calling here
sub();//sub fun is calling here 
prod();//prod fun is calling here
div();//div fun is calling here
mod();//mod fun is calling here

}