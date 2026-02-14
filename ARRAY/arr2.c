//Q.2 Write a Program to find the average of a 1D array.
#include<stdio.h>
int main()
{
    int i, n,sum=0;  //variable declaration
    printf("Enter The Size of Array:");//user input message
    scanf("%d",&n);
    int a[n];// array declaration
    printf("Enter elements of Array:\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]=",i);//user input message
        scanf("%d",&a[i]);//user input
        sum = sum+a[i];//sum
    }
    printf("Average of Array :%.2f",(float)sum/n);
}
