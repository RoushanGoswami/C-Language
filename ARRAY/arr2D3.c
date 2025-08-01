#include<stdio.h>

int main()
{
    int r,c,i,j,sum = 0,count = 0;// variable declaration
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
            count++;
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
    //sum of 2D array
    for (i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            sum = sum + a[i][j];//sum
        }
    }
    printf("Average of 2D Array is %.2f",(float)sum/count);
}