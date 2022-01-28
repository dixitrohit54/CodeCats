//Write a C program to check whether a given number is an armstrong number or not.
#include<stdio.h>
void arm(int);
int main()
{
    int num;
    printf("Enter any number:-\n");
    scanf("%d",&num);
    arm(num);
}
void arm(int a)
{
    int i,r,sum=0;
    for(i=a;a!=0;a/=10)
    {
        r=a%10;
        sum=sum+(r*r*r);
    }
    if(sum==i)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}
