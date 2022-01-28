//Write a program in C to display n terms of natural number and their sum.
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the number of terms to be displayed:-\n");
    scanf("%d",&n);
    printf("Numbers are ");
    for(i=1;i<=n;i++)
    {
        printf("%d,",i);
        sum+=i;
    }
    printf("\nSum= %d",sum);
    return 0;
}
