#include <stdio.h>
// wap to count digit of a number.
void main()

{
    int num;
    int count = 0;

    printf("Enter Number : "); // user input message
    scanf("%d", &num);         // user input ..., ex num = 21

    while (num > 0) // digits of num will be counted only if num is greater then 0
    // or if the condition is true
    {
        // num = num / 10
        num /= 10; // 21/10 = 2 --> 2/10 --> 0
        count++;   // increment in count ,to count the digits of number
    }

    printf("count = %d digits", count); // final output
}
