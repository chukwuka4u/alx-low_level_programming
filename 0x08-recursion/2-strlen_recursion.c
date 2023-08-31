#include "main.h"

/**
 * _strlen_recursion - function that counts the length of a string
 * @s: An input string argument
 * Return: The length of string
 */
int _strlen_recursion(char *s)
{
	static int count = 0;

	if (*s)
	{
		++count;
		_strlen_recursion(s + 1);
	}
	return (count);
}
