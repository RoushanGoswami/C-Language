#include <stdio.h>
//Frequency Counter
//wap to count the frequency of each character in a given string
int main() {
    char str[100];
    int i,count=1,length=0,j;

    printf("Enter a String: ");// user input message
    gets(str);// takes user input
    while (str[length] != '\0') {
        length++;
    }
    for(i=0; i<length; i++)
    {
        for(j=i+1; j<length; j++)
        {
            if(str[i] == str[j] && str[j] != ' ')
            {
                count++;
                str[j]=' ';
            }
        }
        if(str[i]!= ' ')
        {
            printf("'%c'=>%d\n",str[i],count);//print output
            count=1;
        }

    }
    return 0;
}