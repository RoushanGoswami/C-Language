//Q.1 Write a Program to find the length of a 1D array.
#include<stdio.h>
int main()
{
    int n,i,num=0; // variable declartion
    printf("Enter The Size of Array:");//user input message
    scanf("%d",&n);//user input
    int a[n];//array declaration
    printf("Enter Elements of Array\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);//user input message
        scanf("%d",&a[i]);//user input
        num++;//num is incremented
    }
    printf("The length of Array:%d",num);
}