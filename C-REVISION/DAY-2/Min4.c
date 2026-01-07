// 2. WAP to Find Min . from given 4 no. using nested
// if else.
#include <stdio.h>

void main()
{
    int a = 00, b = 00, c = 00, d = 00;
    if (a == b && b == c && c == d && d == a)
    {
        printf("all are equal !");
    }
    else
    {
        if (a < b)
        {
            if (a < c)
            {
                if (a < d)
                {
                    printf("a is min !");
                }
                else
                {
                    printf("d is min !");
                }
            }
            else
            {
                if (c < d)
                {
                    printf("c is min !");
                }
                else
                {
                    printf("d is min !");
                }
            }
        }
        else
        {
            if (b < c)
            {
                if (b < d)
                {
                    printf("b is min !");
                }
                else
                {
                    printf("d is min !");
                }
            }
            else
            {
                if (c < d)
                {
                    printf("c is min !");
                }
                else
                {
                    printf("d is min !");
                }
            }
        }
    }
}