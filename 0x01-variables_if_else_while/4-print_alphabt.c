#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints alphabet except for e and q.
*
* Return: return 0 value at end of function.
*/
int main(void)
{
char exception;
for (exception = 'a' ; exception <= 'z' ; exception++)
{
if(exception != 'e' && exception != 'q')
{
putchar(exception);
}
}
putchar('\n');
return (0);
}
