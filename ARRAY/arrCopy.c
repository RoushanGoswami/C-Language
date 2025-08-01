#include<stdio.h>
int main()
{
    int i, n;// variable declaration
    printf("Enter The size of array:");// user input message
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("Enter elements of Array A:\n");
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d]=",i);//user input message
        scanf("%d",&a[i]);//user input
    }

    printf("Elements Of Array A is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    //copy of array
    for(i=0; i<n; i++)
    {
        b[i]=a[i];
    }
    printf("\nArray b is ");
    for(i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }
}
