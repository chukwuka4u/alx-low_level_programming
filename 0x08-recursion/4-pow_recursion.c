#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to power of y
 * @x: An input value of integer type
 * @y: An input value the power to which x is to be raised
 * Return: the value of raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
