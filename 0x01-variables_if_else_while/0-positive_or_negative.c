#include <studio.h>
#include <time.h>
/**
* main - Prints if a value is positive, negative or equal to 0.
* Return: return 0 value at end.
*/
int maint(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if(n == 0)
{
printf("%n is zero\n");
}
if(n > 0)
{
printf("%n is positive\n");
}
if(n < 0)
{
printf("%n is negative\n");
}

return (0);
}
