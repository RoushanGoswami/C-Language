#include<stdio.h>

int main()
{
    int r,c,i,j, max;// variable declaration
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
    max=a[0][0];// let the first digit will be the maximum
    //largest element
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];

            }
        }
    }

    printf("The largest Element is %d",max);
}
