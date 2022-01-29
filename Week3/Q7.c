//C Program to Find Largest and Smallest Element in Array.
#include<stdio.h>
int main()
{
    int i,n,a[30],max,min;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("Largest element is %d",max);
    printf("\nSmallest element is %d",min);
    return 0;
}
