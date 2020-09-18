#include <stdio.h>

/**
* main - Prints base 16 with putchar
*
* Return: return 0 value at end of function
*/
int main(void)
{
char n;
int i;
for (i = '0' ; i <= '9' ; i++)
{
putchar(i);
}
for (n = 'a' ; n <= 'f'; n++)
{
putchar(n);
}

putchar('\n');
return (0);
}
