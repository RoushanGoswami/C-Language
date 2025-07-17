#include <stdio.h>

int main()
{
    // find the third angle of a triangle
    int first, second, third;
    printf("Enter First Angel :"); // user input message
    scanf("%d", &first);
    printf("Enter Second Angel :"); // user input message
    scanf("%d", &second);
    third = 180 - (first + second); // by angel sum property

    printf(" Third angel = %d", third); // final output
}
