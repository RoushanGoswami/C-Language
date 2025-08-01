#include<stdio.h>

int main()
{
    int r,c,i,j;// variable declaration
    printf("Enter No. Of Rows : ");
    scanf("%d",&r);
    printf("Enter No. Of Column : ");
    scanf("%d",&c);
    int a[r][c];
    printf("Elements of 2D array A : \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter a[%d][%d] = ",i,j);//user input message
            scanf("%d",&a[i][j]);//user input
        }
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
}