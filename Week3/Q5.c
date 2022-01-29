//Write a program in C to find the sum of all elements of the array.
//[Addon] Find Sum of Even and Odd numbers present in array & Sum of Odd and Even Position Elements of an array.
#include<stdio.h>
void sum(int c,int k[]);
void sumeven(int n,int a[]);
void sumodd(int n,int a[]);
void evenpos(int n,int a[]);
void oddpos(int n,int a[]);
int main()
{
    int n,a[50];
    printf("Enter the number of elements of Array:\n");
    scanf("%d",&n);
    printf("Enter the elements:-\n");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Choices are:-\n");
    printf("1)Sum of all elements\n2)Sum of even elements\n3)Sum of odd elements\n4)Sum of even position elements\n5)Sum of odd position elements\n\n");
    printf("Enter the number of choice:\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1: sum(n,a);
                break;
        case 2: sumeven(n,a);
                break;
        case 3: sumodd(n,a);
                break;
        case 4: evenpos(n,a);
                break;
        case 5: oddpos(n,a);
                break;
        default: printf("Incorrect Choice");
    }
    return 0;
}
void sum(int n,int b[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=b[i];
    }
    printf("Sum of all the elements= %d",sum);
}
void sumeven(int n,int b[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        if(b[i]%2==0)
        {
            sum+=b[i];
        }
    }
    printf("Sum of even elements= %d",sum);
}
void sumodd(int n,int b[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        if(b[i]%2!=0)
        {
            sum+=b[i];
        }
    }
    printf("Sum of odd elements= %d",sum);
}
void evenpos(int n,int b[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum+=b[i];
        }
    }
    printf("Sum of even position elements= %d",sum);
}
void oddpos(int n,int b[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum+=b[i];
        }
    }
    printf("Sum of even position elements= %d",sum);
}
