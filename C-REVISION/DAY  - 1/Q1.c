#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a :");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);

    printf("Before Swaping \n a is %d , b is %d", a, b);

    a = a + b; // a = 10 , b = 20 --->a = 30
    b = a - b; // b =10
    a = a - b;
    printf("\nAfter Swaping \n a is %d , b is %d", a, b);

}
