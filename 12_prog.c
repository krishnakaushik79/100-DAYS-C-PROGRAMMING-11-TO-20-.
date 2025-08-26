

/*Q12 (Conditional Statements)
Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/




#include <stdio.h>

int main(){

int i;

printf("Enter an Integer : ");
scanf("%d",&i);

if (i>0)
{
printf("Integer is Positive.\n");
}
else if (i<0)
{
printf("Integer is Negative.\n");
}
else
{
printf("Integer is Zero.\n");
}





return 0;
}
