#include <stdio.h>
/**
* main - print various size types
*
* Return: always 0 (success)
*/
int main(void)
{
printf("Size of a char: %n byte(s)", sizeof(char));
printf("Size of an int: %n bytes(s)", sizeof(int));
printf("Size of a long int: %n byte(s)", sizeof(long int));
printf("Size of a long long int: %n byte(s)", sizeof(long long int));
printf("Size of a float: %n byte(s)", sizeof(float));
return (0);
}
