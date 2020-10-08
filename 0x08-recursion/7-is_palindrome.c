#include "holberton.h"

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: string to be checked
 * Return: 1 if palindrome 0 if not
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (palindrome_finder(s, 0, length - 1));
}

/**
 * _strlen_recursion - prints the length of a string using recursion
 * @s: string to be counted
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (s[length] == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}

/**
 * palindrome_finder - checks if a string is a palindrome or not
 * @s: string to be checked
 * @beginning: starts at the beginning of the string to compare
 * @ending: starts at the ending of the string to compare
 * Return: 1 if is palindrome and 0 if not
 */
int palindrome_finder(char *s, int beginning, int ending)
{
	if (beginning > ending)
	{
		return (1);
	}
	else if (s[beginning] == s[ending])
	{
		return (palindrome_finder(s, beginning + 1, ending - 1));
	}
	else
		return (0);
}

