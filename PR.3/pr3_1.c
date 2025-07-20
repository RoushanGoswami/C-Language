#include<stdio.h>

int main()
{
    //Alphabet Skipper
    //wap to print all the alphabets a to z by skipping 3 alphabets
    //usin do while loop
    char i='a';// declared a character a here
    do
    {
        printf("%c,",i);//print out 
        i=i+4;//i+=4

    } while (i<='z');//value of i will be incremented till the cond.. is true
}