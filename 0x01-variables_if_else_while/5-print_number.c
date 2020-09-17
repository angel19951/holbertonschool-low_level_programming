#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints a string of numbers form 0 to 10
*
* Return: return 0 value at the end of function.
*/
int main(void)
{
int n;
for(n = 0 ; n <= 9 ; n++)
{
putchar((n % 10) + '0');
}
putchar('\n');
return (0);
}
