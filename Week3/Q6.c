//Count Total Number of occurrences of a given element in an array.
#include<stdio.h>
int main()
{
    int n,a[30],i;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the Elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int num,count=0,flag=0;
    printf("Enter the element whose occurences you wanna find:\n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==a[i])
            flag=1;
        break;
    }
    if(flag==1)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]==num)
            count++;
        }
        printf("Occurences of %d is %d",num,count);
    }
    else
    {
        printf("%d is not present in this Array",num);
    }
    return 0;
}
