#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
