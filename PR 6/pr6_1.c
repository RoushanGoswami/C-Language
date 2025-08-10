//wap that checks the given string is palindrome or not
//without using string functions.
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0,Palindrome = 1;//variable declaration

    printf("Enter a string: ");//user input message
    scanf("%s", str);//user input
    while (str[length] != '\0') {
        length++;
    }
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            Palindrome = 0;
            break;
        }
    }

    if (Palindrome)
        printf("The string is a palindrome.\n");//print if palindrome
    else
        printf("The string is not a palindrome.\n");//print if not palindrome

    return 0;
}