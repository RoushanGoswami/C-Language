#include<stdio.h>

int main()
{
    int i, j ; //declaration of two variables i and j

    for (i = 1 ; i <= 5 ; i ++)//for loop (outer loop ) condition 
    {
        for (j=1; j <= i; j++)//for loop (inner loop ) condition
        {
            printf("%d ",j);//print j 
        }
        printf("\n");// new line 
    }

}
