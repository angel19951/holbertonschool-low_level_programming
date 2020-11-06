#include <stdio.h>

/**
 * main - prints all possible combinations of 2 numbers
 * Return: return always 0
 */
int main(void)
{
	int dec, units;

	for (dec = '0'; dec <= '9'; dec++)
	{
		for (units = 0; units <= '9'; units++)
		{
			if (dec < units)
			{
			putchar(dec);
			putchar(units);
				if (units != '9' || dec != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
