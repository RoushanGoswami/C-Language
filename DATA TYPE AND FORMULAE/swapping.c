#include <stdio.h>
#include <conio.h>

void main()
{
    // wap to swap value of two variable using third variable.
    int a, b, c;

    printf("Enter a value a :"); // print user input
    scanf("%d", &a);

    printf("Enter a value b :"); // print user input
    scanf("%d", &b);
    // a = 10 , b= 20

    c = a; // value of a is assigned to variable c. --->a=10 , c=10
    a = b; // a = 20 ,b = 20
    b = c; // b=10 ,c=10

    printf("After swapping :\n a=%d,b=%d\n", a, b); // final output after swapping
}