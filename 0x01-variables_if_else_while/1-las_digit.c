#include <studio.h>
#include <time.h>
/**
* main - Prints if last entry of a number is positive, negative or equal to 0.
* Return: return 0 value at end.
*/
int main(void)
{
int n endValue;

srand(time(0));
n = rand() - RAND_MAX / 2;
endValue = n % 10;
if (n == 0)
{
printf("Last digit of %n is 0 and is 0\n", n);
}
if (n > 5)
{
printf("Last digit of %n is %n and is greater than 5\n", n, endValue);
}
if (n > 0 && n < 6)
{
printf("Last digit of %n is %n and is less than 6 and not 0\n");
}

return (0);
}
