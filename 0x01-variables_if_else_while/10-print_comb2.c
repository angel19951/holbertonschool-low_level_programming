#include <stdio.h>

/**
* main - print all digits from 0 to 99
*
* Return: return 0 value at end of function
*/
int main(void)
{
int n;
int i;
for (n = '0' ; n <= '9' ; n++)
{
for (i = '0'; i <= '9' ; i++)
{
putchar(n);
putchar(i);
if (i != '9' || n != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
