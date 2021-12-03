//Write a C program to check whether a year is a leap year or not.
#include<stdio.h>
int main()
{
    int y;
    printf("Enter any year\n");
    scanf("%d",&y);
    if(y%400==0)
        printf("%d is a leap year",y);
    else
     {
        if(y%4==0)
        printf("%d is a leap year",y);
        else
        printf("%d is not a leap year",y);
     }
    return 0;
}
