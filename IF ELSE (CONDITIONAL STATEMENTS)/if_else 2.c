#include<stdio.h>

int main()
{
//wap to find if a given number is neutral or not using if else
    int num ; // declared two variables here
    printf("Enter The Number:");// user input message
    scanf("%d",&num);//user input

    if (num==0)
    {
        printf("Number is Neutral !");
    }
    else
    {
        printf("Number is not Neutral !");
    }
}