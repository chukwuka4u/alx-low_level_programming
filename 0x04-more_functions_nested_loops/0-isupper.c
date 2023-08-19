#include <stdio.h>

/**
 * _isupper - check Description
 * @c: An integer character
 * Description: function that checks for uppercase character
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
