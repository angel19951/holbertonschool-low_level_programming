#include "holberton.h"
#include <stdio.h>
/**
 * main - prints program name without compiling
 * @argc: size of string
 * @argv: string
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}

