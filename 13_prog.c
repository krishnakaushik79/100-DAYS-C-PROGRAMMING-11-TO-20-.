

/*Q13 (Conditional Statements)
Write a program to input a year and check whether it is a leap year or not using conditional statements.*/




#include <stdio.h>

int main(){

int year;
printf("Enter year : ");
scanf("%d",&year);

if (year%4==0)
{
printf("This is a leap year.\n");
}
else 
{
printf("This is not a leap year.\n");
}


return 0;
}
