#include <stdio.h>

int main() 
{
int age;
float gpa;
char grade;

printf("how old are you?");
scanf("%i", &age);

printf("what is your gpa?");
scanf("%f", &gpa);

printf("what is your letter grade?");
scanf(" %c", &grade);


printf("your age is %i, your gpa is %f, your grade is %c\n,", age, gpa, grade);

return 0;
}
