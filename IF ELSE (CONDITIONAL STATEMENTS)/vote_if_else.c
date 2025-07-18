#include<stdio.h>

int main()
{
//Wap to check user is eligible for vote or not
//using nested if else 
int age ;
printf("Enter Your Age :");//user input message 
scanf("%d",&age);//user input
if(age>=18)
{
printf("You're Eligible for vote !");
}
else
{
printf("You're not Eligible for vote !");
}

}