//Develop a menu-driven program to implement
//arithmetic operations such as +,-,*,/, and % using UDF,switch case,
// and looping. Make sure that the program is endless until
// a certain letter is pressed.
#include<stdio.h>
//Function declartion
int sum();
int sub();
int mul();
int div();
int mod();

//function Definition
int sum(int a,int b)
{
    return a + b;
}
int sub(int a,int b)
{
    return a - b;
}
int mul(int a,int b)
{
    return a * b;
}
int div(int a,int b)
{
    return a / b;
}
int mod(int a,int b)
{
    return a % b;
}

int main()
{
    {   int choice,result,a,b;//variable declartion
        printf("Press 1 for +");//Addition
        printf("\nPress 2 for -");//Subtraction
        printf("\nPress 3 for *");//Multiplaction
        printf("\nPress 4 for /");//Division
        printf("\nPress 5 for %");//module
        printf("\nPress 0 for Exit");// Exit from the Calculator program


        printf("\n\nEnter Your Choice : ");
        scanf("%d",&choice);
        if (choice==0)
        {
            printf("\nExit !\nYou are Exited From The Calculator program !");
        }
        else {
            printf("\nEnter First Number : ");//user input message
            scanf("%d",&a);//user input
            printf("\nEnter Second Number : ");//user input message
            scanf("%d",&b);//user input

            switch(choice)
            {

            case 1://sum
                result = sum(a,b);//it catchs the return value
                printf("\nAddition of %d + %d = %d ",a,b,result);//result
                break;
            case 2 ://subtraction
                result = sub(a,b);//it catches and stores the return value
                printf("\nSubtraction of %d - %d = %d ",a,b,result);//output
                break;
            case 3 : // Multiplication
                result = mul(a,b);//catch and store return value
                printf("\nMultication of %d * %d = %d",a,b,result);//output
                break;

            case 4 : // Division
                result = div(a,b);//catch and store return value
                if(b==0)
                {
                    printf("\nDenominator should not equal to 0 !");
                    return 0;
                }
                printf("\nDivision of %d / %d = %d",a,b,result);//output
                break;
            case 5 : // Module
                result = mod(a,b);//catch and store return value
                if(b==0)
                {
                    printf("\nb = 0 ! Not Allowed ");
                    return 0;
                }
                printf("\nModule = %d",result);//output
                break;
            default:
                printf("\n\nInvalid !\nPlease Enter Number between 1 to 5");
            }
        }
    }
}
