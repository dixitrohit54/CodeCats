//Write a C program to determine whether a given number is prime or not.
#include<stdio.h>
int main()
{
    int num,i,flag=0;
    printf("Enter any number:-\n");
    scanf("%d",&num);
    if(num>1)
    {
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
        printf("prime");
    else
        printf("non-prime");
}
