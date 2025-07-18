#include<stdio.h>

int main()
{
 //wap to find if a given number is neutral or not
 //using ladder if else
 
 int num ;//declared a variable num here
 printf("Enter The Number:");//user input message 
 scanf("%d",&num);//user input 
 
 if(num>0)
 {
 printf("The number is Positive !");
 }
 else if (num<0)
 {
 printf("The number is Negative !");
 }
 else 
 {
 printf("The number is Neutral !");
 }
 
 
}