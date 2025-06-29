#include<stdio.h>

int main()
{
    //wap to find leap year from 2000 to 3000 using for loop 
    int start = 2000 , end = 3000;
    
    for(start , end ; start <= end ; start += 4)
    {
    printf("%d\n",start);
    
    }
}