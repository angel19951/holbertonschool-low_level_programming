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
putchar((n % 10) + '0');
putchar(',');
}
putchar('\n');

return (0);
}
