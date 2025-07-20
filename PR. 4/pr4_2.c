#include<stdio.h>

int main()
{
//FLOYD'S TRIANGLE PATTERN
int i,j,num = 11;// declared variable i and j & num =11
for (i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
printf("%d ",num);
num++;
}
printf("\n");
}
}