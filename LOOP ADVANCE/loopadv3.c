#include <stdio.h>

void main()

{
    // wap to find sum of all digits of a number.
    int num;        // declared a variable num
    int sum = 0, ld; // declare sum = 0 and ld variable

    printf("Enter Number :");
    scanf("%d", &num);

    while (num > 0) // loop will not be executed when the condition become false
    {
        ld = num % 10;  // last digit will be identified here
        sum = sum + ld;   // sum += ld
        num /= 10 ;
    }
    printf("%d", sum); // final output
}
