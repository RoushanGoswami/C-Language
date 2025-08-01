#include<stdio.h>
int main()
{
    int i, n,j;// variable declaration
    printf("Enter The size of array:");// user input message
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of Array A:\n");
    for(i=0; i<n; i++)
    {
        printf("Enter a[%d]=",i);//user input message
        scanf("%d",&a[i]);//user input
    }

    printf("Table Of elemnts of Array A is: \n" );
    for(i=0; i<n; i++)
    {
        for (j=1; j<=10; j++)
        {
            printf("%d*%d = %d\n",a[i],j,a[i]*j);
        }
        printf("\n");

    }
}
