#include<stdio.h>

int main()
{
int i,j;//declared two variable i an j
for (i=41;i<=45;i++)
{
for (j=41;j<=i;j++)
{
printf("%d ",j);//printing J because digits of row is changing

} 
printf("\n");
}
}