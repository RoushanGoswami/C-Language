// 3. WAP to Find max. from given 2 no. using ternary operator.
#include <stdio.h>
void main()
{
    // (condition) ? printf() : printf();
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("\nEnter b : ");
    scanf("%d", &b);

    (a > b) ? printf("a is max !") : printf("b is max ! ");
}