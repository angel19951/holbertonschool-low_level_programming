#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int n;
for (n = 0 ; n <= 9; n++)
{
putchar((n % 10) +'0');
}
putchar('\n');

return (0);
}
