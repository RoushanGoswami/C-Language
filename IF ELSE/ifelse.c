#include <stdio.h>

void main()

{
    // WAP to Find min. no. from given 2 no. using if else.
    int a, b;                     // declared two variable a and b
    printf("Enter a number A :"); // user input message
    scanf("%d", &a);              // user input
    printf("Enter a number B :"); // user input message
    scanf("%d", &b);              // user input

    if (a > b)
    {
        printf("b is min "); // print output
    }
    else
    {
        printf("a is min"); // print output
    }
}