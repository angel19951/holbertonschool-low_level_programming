#include "holberton.h"
#include <stdio.h>

/**
 * main - print all arguments it recieves
 * @argc: ammount of arguments
 * @argv: agument string
 * Return: always 0 on succes
 */

int main(int argc, char **argv)
{
	int index;

	for (index = 0; index < argc; index ++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
