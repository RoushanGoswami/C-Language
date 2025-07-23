// wap to print multiplication table of n. using funtion
#include<stdio.h>
//int tabel();//here tabel function is declared
int tabel()//function definition
{
    int i,n;//declared function i here
    printf("Enter The Number:");
    scanf("%d", &n);
    for (i=1 ; i <=10 ; i++)
    {
        printf("%d*%d=%d\n",n,i,i*n);
    }
}
//main function
int main()
{
    tabel();//function table --> calling
}