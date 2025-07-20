#include<stdio.h>

int main()
{
    int score;//declared a variable score here
    printf("Enter Your Score: ");//user input message
    scanf("%d",&score);//user input
    if(score>100)
    {
        printf("You can't Enter score Above 100 !");
    }

    else if(score>80&& score<=100)
    {
        printf("Your Grade is A.Excellent Work!\nCongratulations! You are Eligible for the next Level.");
    }

    else if (score>60 && score<=80)
    {
        printf("Your Grade is B.Well done!\nCongratulations! You are Eligible for the next Level.");
    }
    else if(score>40 && score<=60)
    {
        printf("Your Grade is C.Good Job!\nCongratulations! You are Eligible for the next Level.");
    }
    else if (score>30 && score<=40)
    {
        printf("Your Grade is D.\nYou passed! but you could do better .\nCongratulations! You are Eligible for the next Lev Level.");
    }
    else
    {
        printf("Your Grade is F.\nSorry, You Failed.\nPlease Try Again Next Time.");
    }
}
