#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - print all single digits
*
* Return: return 0 value at end of function
*/
int main(void)
{
int n;
for (n = 0 ; n <= 9 ; n++)
{
if (n < 8)
{
putchar((n % 10) + '0');
putchar(',');
putchar(' ');
}
if (n == 9)
{
putchar((n % 10) + '0');
}
}
putchar('\n');

return (0);
}
