//Write a C program to find the maximum between two numbers.
#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
if(a>b)
    printf("%d is max",a);
else
    printf("%d is max",b);
return 0;
}
