#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - print from 0 to 9
*
* Return: return 0 value at end of function
*/
int main(void)
{
int n;
for (n = 9 ; n >= 0 ; n--)
{
putchar((n % 10) + '0');
}
putchar('\n');

return (0);
}
