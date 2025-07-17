#include <stdio.h>

void main()

{
    // Gross salary Calculator

    int salary, HRA, DA, TA, Grosssalary; // Declared variables salary , hra ,da ,ta and grosssalray

    printf("Enter your base salary :"); // user input message
    scanf("%d", &salary);               // user input

    HRA = salary * 10 / 100;              // 10% hra
    DA = salary * 5 / 100;                // 5% da
    TA = salary * 8 / 100;                // 8% ta
    Grosssalary = salary + HRA + DA + TA; // total gross_salary

    printf("Gross Salary = %d Rs", Grosssalary); // printing the total Gross salary
}