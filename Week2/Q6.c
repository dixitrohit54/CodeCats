//C program to find power of a number using for loop.
#include<stdio.h>
int main()
{
    int num,pow,sum=1;
    int i;
    printf("Enter any number:\n");
    scanf("%d",&num);
    printf("Enter it's power:\n");
    scanf("%d",&pow);
    for(i=1;i<=pow;i++)
    {
        sum=sum*num;
    }
    printf("%d^%d = %d",num,pow,sum);
}
