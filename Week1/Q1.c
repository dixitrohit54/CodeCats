//Write a C program to check whether a number is even or odd.
#include<stdio.h>
int main()
{
int num;
printf("Enter any no\n");
scanf("%d",&num);
if(num%2==0)
printf("%d is even no",num);
else
printf("%d is odd no",num);
return 0;
}
