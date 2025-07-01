#include <stdio.h>

void main()

{
    // WAP to Find if a given no. is neutral or not using if else.
    int num;

    printf("Enter a number :"); // user input message
    scanf("%d", &num);          // user input

    if (num == 0) // num = 0 then
    {
        printf("number is neutral"); // print this or if not then
    }
    else
    {
        printf("number is not neutral"); // print this
    }
}