#include<stdio.h>
int main()
{
    int i, n ;// variable declartion
    printf("Enter the size of Array : ");//user input message
    scanf("%d",&n);//user input

    int a[n];// array A is declaraed here
    printf("\nEnter Elements of Array :\n");
    for (i=0; i<n; i++)
    {
        printf("a[%d] = ",i);//user input message
        scanf("%d",&a[i]);//user input
    }
//output
    printf("Negative elements from an array : ");
    for(i=0; i<n ; i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
        }


    }
}
