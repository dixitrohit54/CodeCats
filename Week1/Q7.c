//Write a C program to count the total number of notes in a given amount.
#include<stdio.h>
int main()
{
    int amount,temp,rem;
    printf("Enter an amount\n");
    scanf("%d",&amount);
    if(amount>0)
    {
        temp=amount/500;
        rem=amount%500;
        printf("No. of 500 notes are %d\n",temp);
        temp=rem/100;
        rem%=100;
        printf("No. of 100 notes are %d\n",temp);
        temp=rem/50;
        rem%=50;
        printf("No. of 50 notes are %d\n",temp);
        temp=rem/20;
        rem%=20;
        printf("No. of 20 notes are %d\n",temp);
        temp=rem/10;
        rem%=10;
        printf("No. of 10 notes are %d\n",temp);
        temp=rem/5;
        rem%=5;
        printf("No. of 5 notes are %d\n",temp);
        temp=rem/2;
        rem%=2;
        printf("No. of 2 notes are %d\n",temp);
        temp=rem/1;
        rem%=1;
        printf("No. of 1 notes are %d\n",temp);
    }
    else
    {
        printf("No such notes exist");
    }
    return 0;
}
