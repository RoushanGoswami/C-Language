#include<stdio.h>


void main ()

{

//wap to reverse the user given number

int num, rev = 0 ,ld;// declared two variables num , rev = 0 
printf("Enter the number :");// user input message
scanf("%d",&num);//user input
while(num>0)// the loop will not break till the value of num > 0 ---> 123
{
ld = num%10 ;// last digit of num will be identified here and will be assigned to ld 
rev = (rev*10) + ld ;
num = num / 10 ; // num /= 10 ... 

}
printf("Reverse of the given number is :%d",rev);// final output 

}