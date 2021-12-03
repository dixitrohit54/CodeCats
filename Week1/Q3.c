//Write a C program to find the maximum between three numbers.
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);
/*if(a>b)
{
    if(a>c)
    {
    printf("%d is max",a);
    }
    else
    {
        printf("%d is max",c);
    }
}
else
{
    if(b>c)
    {
    printf("%d is max",b);
    }
    else
    {
        printf("%d is max",c);
    }
}*/
//this qn can be done by above syntax or below syntax.
a>b?(a>c?printf("%d is max",a):printf("%d is max",c)):(b>c?printf("%d is max",b):printf("%d is max",c));
return 0;
}
