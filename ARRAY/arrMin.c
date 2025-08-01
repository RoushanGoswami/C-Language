#include<stdio.h>
int main()
{
    int i, n, min;// variable declaration
    printf("Enter The size of array:");// user input message
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of Array A:\n");
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d]=",i);//user input message
        scanf("%d",&a[i]);//user input
    }

    printf("Elements Of Array A is : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    min = a[0];// assume a[0] is minimum
    for(i=0; i<n; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }
    printf("\nMinimum is %d",min);
}
