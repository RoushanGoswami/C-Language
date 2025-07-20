#include<stdio.h>

int main()
{
    int num,fd=0,sum=0 ; // declared variable num,sum,fd  here
    printf("Enter Any Number :");//user input message
    scanf("%d",&num);//user input
    int ld = num % 10 ;//last digit
    do
    {
        num=num/10;//last digit will be removed
    } while (num>9);//loop will be executed only if the cond is true
//we want the fd which will be a single digit number
    fd = fd + num;//first digit = fd + num
    sum = sum + fd+ld;//sum of fd and ld
    printf("The sum of First and Last Digit = %d",sum);

}