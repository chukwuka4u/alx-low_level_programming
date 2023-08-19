#include "main.h"

/**
 * print_line - check Description
 * @n: An integer
 * Description: function that draws a straight line in the terminal
 * Return: Nothing
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		--n;
	}
	_putchar('\n');
}
