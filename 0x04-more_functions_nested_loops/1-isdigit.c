#include <stdio.h>

/**
 * _isdigit - check Description
 * @c: An integer
 * Description: Function that checks for digit (0 through 9)
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
