#include<stdio.h>
int main()
{
//wap to perform the addition of two (same size) 1D arrays
//and store it to the another array
    int i, n;// variable declaration
    printf("Enter The size of array:");// user input message
    scanf("%d",&n);
    int a[n];
    int b[n];
    int c[n];
    printf("Enter elements of Array A:\n");
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d]=",i);//user input message
        scanf("%d",&a[i]);//user input

    }
    printf("Enter elements of array B:\n");
    for (i=0; i<n; i++)
    {
        printf("Enter b[%d]=",i);
        scanf("%d",&b[i]);
    }
//sum of arrays
    printf("Array C is : ");
    for(i=0; i<n; i++)
    {
        c[i]= a[i]+b[i];//sum

        printf("%d,",c[i]);//output
    }
}