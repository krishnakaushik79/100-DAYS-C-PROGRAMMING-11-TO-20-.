

/*Q15 (Conditional Statements)
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/




#include <stdio.h>

int main(){

char c;
printf("Enter Alphabet : ");
scanf("%c",&c);

if (c>='A' && c<='Z')
{
printf("Uppercase Alphabet.\n");
}

else if (c>='a' && c<='z')
{
printf("Lowercase Alphabet.\n");
}

else if (c>='0' && c<='9')
{
printf("Digit.\n");
}

else 
{
printf("Special Character.\n");
}

return 0;
}
