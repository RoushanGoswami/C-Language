#include <stdio.h>

void main()

{
    // wap to find sum of first and last digit of a number.
    int num;    // declare a num variiable
    int ld;     // declare a ld (last digit) variable = num/10-->to get last digit
    int fd = 0; // declare a variable fd variable (first digit)

    printf("Enter Number :"); // user input message
    scanf("%d", &num);        // user input ---> ex 123
    ld = num % 10;
    while (num > 9) // num > 9 ---> not to go for 1 digit no.
    {
        num /= 10; // num = num / 10 ---> to get the fd by removing the remaining ld
        // ex 123 --> then num after process num = 1
    }

    fd = num;                                     // assign the value of num in fd                                   // value of num(1) is assigned to fd
    printf("sum of first and last digits is \n"); // print out
    printf("%d + %d = %d", fd, ld, fd + ld);      // final output
}
