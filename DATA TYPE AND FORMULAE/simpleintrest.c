// WAP to Simple interest.
#include <stdio.h>
#include <conio.h>.
void main()

{
    float p, r, t; // declaration of variable

    printf("Enter the value of principal P = "); // print the written value
    scanf("%f", &p);

    printf("Enter the value of rate of interest R = "); // print the written value
    scanf("%f", &r);

    printf("Enter the value of Time T = "); // print the written value
    scanf("%f", &t);

    // final answer
    printf("Simple Intrest = %f", (p * r * t) / 100);
}