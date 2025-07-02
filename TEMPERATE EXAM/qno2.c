#include <stdio.h>

void main()

{
    // Write C program to print multiplication table of any number.
    int num, i = 1;
    printf("Enter the number :");
    scanf("%d", &num);
    printf("\n");
    printf("the table of the given number is :\n");

    while (i <= 10)

    {
        printf("%d * %d = %d\n", num, i, num * i);
        i++;
    }
}