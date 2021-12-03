/*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40%   : Grade F*/
#include<stdio.h>
int main()
{
    float phy,chem,bio,math,comp;
    float percentage;
    printf("Enter the marks of 5 subjects\n");
    scanf("%f%f%f%f%f",&phy,&chem,&bio,&math,&comp);
    percentage=(phy+chem+bio+math+comp)*100/500;
    if(percentage>=90)
    {
        printf("The student got percentage %.2f and Grade A",percentage);
    }
    else if(percentage<90&&percentage>=80)
    {
        printf("The student got percentage %.2f and Grade B",percentage);
    }
    else if(percentage<80&&percentage>=70)
    {
        printf("The student got percentage %.2f and Grade C",percentage);
    }
    else if(percentage<70&&percentage>=60)
    {
        printf("The student got percentage %.2f and Grade D",percentage);
    }
    else if(percentage<60&&percentage>=40)
    {
        printf("The student got percentage %.2f and Grade E",percentage);
    }
    else
    {
        printf("The student got percentage %.2f and Grade F",percentage);
    }
    return 0;
}

