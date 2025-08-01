#include<stdio.h>
int main()
{
    int i, n,count = 0;// variable declaration
    printf("Enter The size of array:");// user input message
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of Array A:\n");
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d]=",i);//user input message
        scanf("%d",&a[i]);//user input
        count++;
    }
    printf("Array A = ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);//output
    }
    printf("\nNo. of Elements in array A is %d",count);
    //reverse order
    printf("\nReverse Order : ");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
}
