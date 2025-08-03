#include<stdio.h>
//wap to print and find the sum of all elements of
//a given row & column from a 2D array.
int main()
{
    int r,c,i,j,sum;// variable declaration
    printf("Enter No. Of Rows : ");
    scanf("%d",&r);
    printf("\nEnter No. Of Column : ");
    scanf("%d",&c);
    int a[r][c];

    printf("\nElements of 2D array A : \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter a[%d][%d] = ",i,j);//user input message
            scanf("%d",&a[i][j]);//user input
        }
        printf("\n");
    }
//dispaly 2D array
    printf("The 2D array is :\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Enter Row Number : ");//user input message
    scanf("%d",&r);

    for(i=0; i<=r; i++)
    {
        sum = 0;

        for(j=0; j<c; j++)
        {

            sum = sum + a[i][j];//sum
        }

    }
    printf("The sum of Row %d is %d\n",r,sum);

    printf("\nEnter Column Number : ");//user input message
    scanf("%d",&c);//user input 
    for(i=0; i<c; i++)
    {
        sum = 0;

        for(j=0; j<r; j++)
        {

            sum = sum + a[j][i];//sum
        }

    }

    printf("The sum of column %d is %d",c,sum);//final output
}
