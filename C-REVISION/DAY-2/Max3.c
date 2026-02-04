#include <stdio.h>
// 2. WAP to Find MAX. from given 3 no. using nested
// if else.
void main()
{
    int a = 10, b = 20, c = 30;

    if (a == b && b == c && c == a)
    {
        printf("All are equal !");
    }
    else
    {
        if (a > b)
        {
            if (a > c)
            {
                printf("a is max !");
            }
            else
            {
                printf("c is max !");
            }
        }
        else
        {
            if (b > c)
            {
                printf("b is max !");
            }
            else
            {
                printf("c is max !");
            }
        }
    }

}
