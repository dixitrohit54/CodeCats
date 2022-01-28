#include<stdio.h>
int main()
{
    int n;
    printf("Enter any Natural number:-\n");
    scanf("%d",&n);
    int i,count,sum=0;
    for(i=5;i>0;i=i*5)
    {
        count=n/i;
        sum+=count;
        if(count==0)
            break;
    }
    printf("\nNumber of trailing zeros in %d! is %d",n,sum);
    return 0;
}

