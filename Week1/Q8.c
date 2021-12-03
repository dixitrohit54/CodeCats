//Write a C program to find all roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float D,root1,root2,temp;
    printf("Enter the values of a,b,c for the Quadratic eqn ax^2+bx+c=0\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("Equation is %.0fx^2+(%.0fx)+(%.0f)=0\n",a,b,c);
    D=b*b-4*a*c;
    if(D>0)
    {
        printf("Roots are Real and Distinct.\n");
        root1=(-b+sqrt(D))/2*a;
        root2=(-b-sqrt(D))/2*a;
        printf("Root1:%.2f\nRoot2:%.2f\n",root1,root2);
    }
    else if(D==0)
    {
        printf("Roots are Real and Equal\n");
        root1=-b/2*a;
        root2=root1;
        printf("Root1:%.2f\nRoot2:%.2f\n",root1,root2);
    }
    else if(D<0)
    {
        printf("Roots are Imaginary\n");
        temp=-b/2*a;
        root1=sqrt(-D)/(2*a);
        root2=root1;
        printf("Root1:%.2f+%.2fi\n",temp,root1);
        printf("Root2:%.2f-%.2fi",temp,root2);
    }
    return 0;
}
