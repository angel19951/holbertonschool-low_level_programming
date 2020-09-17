#include <studio.h>
#include <time.h>

/**
* main - Prints if a value is positive, negative or equal to 0.
*
* Return: return 0 value at end.
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
{
printf("%ld is zero\n", n);
}
if (n > 0)
{
printf("%ld is positive\n", n);
}
if (n < 0)
{
printf("%ld is negative\n", n);
}

return (0);
}
