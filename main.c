/*
    Project: PaySlip Program
    Author:  O. Butuba DSE-01-0786/2021
    Date:    Oct 19, 2021
    Compiler: GCC
    Language: C99
    License:  MIT

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char name[100];
    int emp_no;
    int hours;
    int normal_pay;
    int overtime_pay;
    int gross;
    float tax;
    float net;
    const int rate = 1000;

    printf("\n Gitonga's Factory Payslip System\n");

    printf("Employee name: ");
    gets(name); // reads whole line of input
    printf("Employee number: ");
    scanf("%d", &emp_no);        //input
    printf("Hours worked: ");
    scanf("%d", &hours);

    //computation
    if(hours > 40)
    {
        normal_pay = rate * 40;
        overtime_pay = (hours - 40) * (rate * 1.5);
    }
    else {
        normal_pay = hours * rate;
        overtime_pay = 0;
    }

    gross = normal_pay + overtime_pay;
    tax   = 0.30 * gross;
    net   = gross - tax;

    //print payslip
    printf("\n");
    printf("Employee No:   \t%d\n", emp_no);
    printf("Employee name: \t%s\n", name);
    printf("Normal Pay: \t%d\n", normal_pay);
    printf("Overtime Pay: \t%d\n", overtime_pay);
    printf("Gross Pay: \t%d\n", gross);
    printf("Tax: \t%f\n", tax);
    printf("Net Pay: \t%f\n", net);

    return 0;
}

