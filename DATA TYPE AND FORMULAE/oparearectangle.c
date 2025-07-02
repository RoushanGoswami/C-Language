#include <stdio.h>
#include <conio.h>
// WAP to Find area of rectangle.
void main()

{
    float l, b; // declaration of variable l and b

    printf("Enter the value of side l = "); // print the written value
    scanf("%f", &l);

    printf("Enter the value of side b = ");
    scanf("%f", &b);
    // final answer will be the area of rectangle
    printf("Area of rectangle = %f", l * b);
}