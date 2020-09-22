#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints out from 0 to 9 withouth use of printf
*
* Return: return 0 value at end of function
*/
int main(void)
{
int n;
for (n = '0' ; n <= '9' ; n++)
{
putchar(n);
}
putchar('\n');

return (0);
}
