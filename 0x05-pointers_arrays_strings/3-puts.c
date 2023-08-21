#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line to stdout
 * @str: An input string pointer
 * Return: Nothing
 */
void puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(i);
	_putchar('\n');
}
