#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints the alphabet in reverse order
*
* Return: return 0 value at end of function
*/
int main(void)
{
char revAlpha;
for(revAlpha = 'z' ; revAlpha >= 'a' ; revAlpha--)
{
putchar(revAlpha);
}
return (0);
}
