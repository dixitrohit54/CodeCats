/*Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/
#include<stdio.h>
int main()
{
    float salary,Gsalary;
    printf("Enter the salary of an Employee\n");
    scanf("%f",&salary);
    if(salary<=10000)
    {
        Gsalary=salary+(salary*20/100)+(salary*80/100);
        printf("Gross Salary: %.2f",Gsalary);
    }
    else if(salary<=20000&&salary>10000)
    {
        Gsalary=salary+(salary*25/100)+(salary*90/100);
        printf("Gross Salary: %.2f",Gsalary);
    }
    else if(salary>20000)
    {
        Gsalary=salary+(salary*30/100)+(salary*95/100);
        printf("Gross Salary: %.2f",Gsalary);
    }
    return 0;
}

