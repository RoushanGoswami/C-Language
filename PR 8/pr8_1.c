#include<stdio.h>
#include<conio.h>

void main()
{
    char str[100];
    char *ptr;
    int i=0;// variable declaration

    printf("Enter a string : ");// user input message
    gets(str);// takes user input
    ptr=str;

    while(*ptr != '\0')//loop will be executed till the condition is true
    {
        ptr++;
        i++;

    }
    printf("length of string is %d",i);//FINAL OUTPUT
}

