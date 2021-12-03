//Write a C program to input any character and check whether it is alphabet, digit or special character.
#include<stdio.h>
int main()
{
    char c;
    printf("Enter any character\n");
    scanf("%c",&c);
    if(c>=48&&c<=57)
    {


        printf("%c is a digit",c);
    }
    else if(c>=65&&c<=90)
     {

        printf("%c is alphabet",c);
     }
    else if(c>=97&&c<=122)
     {
         printf("%c is alphabet",c);
     }
    else
    {

        printf("%c is Special character",c);
    }
    return 0;
}
