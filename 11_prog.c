

/*Q11 (Conditional Statements)
Write a program to input an integer and check whether it is even or odd using if–else.*/




#include <stdio.h>

int main(){

int i;

printf("Enter an Integer : ");
scanf("%d",&i);

if (i%2==0)
{
printf("%d is Even.\n",i);
}
else
{
printf("%d is Odd.\n",i);
}



return 0;
}
