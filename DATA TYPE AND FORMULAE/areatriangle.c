#include <stdio.h>
#include <conio.h>
// WAP to Find area of triangle
void main()

{
    float b, h; // declaration of variable b and h

    printf("Enter the value of base b = "); // print the written value
    scanf("%f", &b);

    printf("Enter the value of height h = "); // print out
    scanf("%f", &h);
    // final answer for area of triangle
    printf("Area of triangle = %f", (b * h) / 2);
}