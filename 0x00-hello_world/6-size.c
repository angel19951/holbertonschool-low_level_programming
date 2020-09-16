#include <stdio.h>
/**
* main - Print size of written value
* Return: return function 0 value at end
*/
int main(void)
{
char character;
int integer;
long int longInteger;
long long int longlongInteger;
float decimal;

printf("Size of a char:"sizeof(character));
printf("Sizr of an int:"sizeof(integer));
printf("Size of a long int:"sizeof(longInteger));
ptintf("Size of a long long int:"sizeof(longlongInteger));
printf("Size of a float:"sizeof(decimal));

return (0);
}
