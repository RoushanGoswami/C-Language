#include<stdio.h>

int main()
{
    int r,c,i,j;// variable declaration
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
    int transpose[i][j];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            //here the elements of 2d array is interchanging
            //means r-->c and c-->r storing in transpose array
            transpose[i][j] = a[j][i];
        }
    }

    printf("\nThe Transpose matrix of given Array is :\n");
    //display transpose
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",transpose[i][j]);//final output
        }
        printf("\n");
    }
}
