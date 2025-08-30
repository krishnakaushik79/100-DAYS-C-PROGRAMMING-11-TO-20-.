

/*Q18 (Conditional Statements)
Write a program to assign grades based on a percentage input.*/




#include <stdio.h>

int main() {

float Percentage;

printf("Enter Percentage of Student : ");
scanf("%f",&Percentage);

if (Percentage==100)
{
printf("Grade A+\n");
}

else if (Percentage<100 && Percentage>=90)
{
printf("Grade A\n");
}

else if (Percentage>=80)
{
printf("Grade B+\n");
}

else if (Percentage>=70)
{
printf("Grade B\n");
}

else if (Percentage>50)
{
printf("Grade C\n");
}

else 
{
printf("Grade F\n");
}

return 0;
}
