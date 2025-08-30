

/*Q17 (Conditional Statements)
Write a program to find the roots of a quadratic equation and categorize them.*/




#include <stdio.h>
#include <math.h>

int main() {

int a,b,c,d,e,f;
printf("Enter coefficient of x : ");
scanf("%d%d%d",&a,&b,&c);


d=sqrt(b*b-4*a*c);
e=(-b+d)/2*a;
f=(-b-d)/2*a;

if (d>0)
{
    printf("Real and Distinct Roots\n");
    printf("Roots of Quadratic Equation : %d,%d",e,f);
}
else if (d==0)
{
    printf("Real and Equal Roots.\n");
    printf("Roots of Quadratic Equation : %d",e);
}
else 
{
    printf("Imaginary Roots.\n");
}


return 0;
}
