#include <stdio.h>
#include <conio.h>

void main()
{
    // wap to swap value of two variable without using third variable.
    int a, b;

    printf("Enter a value a :"); // print user input
    scanf("%d", &a);

    printf("Enter a value b :"); // print user input
    scanf("%d", &b);
    // a = 10 , b= 20
    a = a + b;                                      // a = 10+20 = 30
    b = a - b;                                      //= 30-20 --> b becomes 10
    a = a - b;                                      // 30-10 = 20 --> a becomes 20
    printf("After swapping :\n a=%d,b=%d\n", a, b); // final output after swapping
}