//Write a C program to calculate the factorial of a given number.
#include<stdio.h>
int main()
{
   int i,num,fact=1;
   printf("Enter the number whose factorial u wanna find:-\n");
   scanf("%d",&num);
   for(i=num;i>=1;i--)
   {
       fact=fact*i;
   }
   printf("Factorial=%d",fact);
}
