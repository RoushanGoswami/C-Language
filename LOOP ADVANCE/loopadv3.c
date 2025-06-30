#include <stdio.h>

void main()

{
    // wap to find sum of all digits of a number.
    int num;        // declared a variable num
    int fd = 0, ld; // declare fd = 0 and ld variable

    printf("Enter Number :");
    scanf("%d", &num);

    while (num > 0) // loop will not be executed when the condition become false
    {
        ld = num % 10;  // last digit will be identified here
        num = num / 10; // last digit of num will be removed
        fd = fd + ld;   // sum of fd and ld is assigned in fd
    }
    printf("%d", fd); // final output
}
