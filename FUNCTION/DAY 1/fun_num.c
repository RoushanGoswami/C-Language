// wap to print 1 to n using function.
#include<stdio.h>
int num(void);// function declaration
int num()// fun num is defined here
{
    int i,n;// declared variables i and n here
    printf("Enter The Number:");//user input message
    scanf("%d",&n);// user input
    for (i=1; i<=n; i++)
    {
        printf("%d\n",i);//print i
    }
}

int main()
{
    num();//num function calling
}