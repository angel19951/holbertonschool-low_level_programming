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
int n = 0;
for (n = 0; n <= 9 ; n++)
{
putchar((n) + '0');
if (n != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
