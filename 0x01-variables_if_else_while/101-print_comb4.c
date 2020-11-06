#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int hund, dec, unit;

	for (hund = '0'; hund <= '7'; hund++)
	{
		for (dec = '0'; dec <= '8'; dec++)
		{
			for (unit = '0'; unit <= '9'; unit++)
			{
				if (unit > dec && dec > hund)
				{
					putchar(hund);
					putchar(dec);
					putchar(unit);
					if (hund != '7' || dec != '8' || unit != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
