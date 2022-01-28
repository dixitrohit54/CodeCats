//Write a program in C to display the number in reverse order.
#include<stdio.h>
int main()
{
    int num,r,i,sum=0;
    printf("Enter any number\n");
    scanf("%d",&num);
    for(i=num;num!=0;num/=10)
    {
        r=num%10;
        sum=sum*10+r;
    }
    printf("Red",sum);
    return 0;
}
