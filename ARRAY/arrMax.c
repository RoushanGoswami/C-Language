#include<stdio.h>
int main()
{
    int i, n, max;// variable declaration
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
    max = a[0];// assume a[0] is maximum
    for(i=0; i<n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    printf("\nMaximum is %d",max);
}
