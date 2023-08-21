#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: An input character pointer
 * Return: integer
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		++i;

	return (i);
}
