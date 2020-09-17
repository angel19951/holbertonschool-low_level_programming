#include <stdlib.h>
#include <time.h>

/**
* main - tells if value is positive, negative or zero
*
* Return: return 0 value at end of function
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	{
	return (0);
}
