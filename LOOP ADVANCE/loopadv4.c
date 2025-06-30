#include <stdio.h>

void main()

{
    // wap to reverse user given number.

    int num; // declare a variable num here
    int ld;
    printf("Enter Number : "); // user input message
    scanf("%d", &num);         // user input

    while (num > 0) // loop will not be executed when the condition becomes false
    {

        ld = num % 10;    // last digit will be identified here
        printf("%d", ld); // print ld here
        num = num / 10;   // value of num / 10 is assagned in num
    }
}