#include<stdio.h>

int main()
{
//Digit Counter
//wap to count the total number of digits of a number
    int num,count = 0; //declared two variables num here
    printf("Enter Any Number:");//user input message
    scanf("%d",&num);//user input
    while(num>0)
    {
        num= num / 10 ;//last digit will be removed 
        count ++;//count will be incremented
    }
    printf("Digits of the given Number = %d",count);

}