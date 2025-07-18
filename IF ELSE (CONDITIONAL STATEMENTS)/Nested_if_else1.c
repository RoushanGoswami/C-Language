#include<stdio.h>

int main()
{
// wap to check Number is positive , Negative or Neutral using
//Nested if else
    int num;// declared a variable num here
    printf("Enter The Number:");//user input message
    scanf("%d",&num);// user input
    if(num>=0)
    {
        if(num>0)
        {
            printf("The number is Positive !");
        }
        else
        {
            printf("The number is Neutral !");
        }

    }
    else
    {
        printf("The number is Negative !");
    }

}