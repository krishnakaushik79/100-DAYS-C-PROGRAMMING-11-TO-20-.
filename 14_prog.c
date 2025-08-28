

/*Q14 (Conditional Statements)
Write a program to input a character and check whether it is a vowel or consonant using if–else.*/




#include <stdio.h>

int main(){

char alpha;
printf("Enter Alphabet : ");
scanf("%c",&alpha);

if (alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'||alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U')
{
printf("Your Alphabet is Vowel.\n");
}
else 
{
printf("Your Alphabet is Consonant.\n");
}



return 0;
}
