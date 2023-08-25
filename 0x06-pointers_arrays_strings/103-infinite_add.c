#include "main.h"
#include <string.h>
#include <math.h>

/**
 * infinite_add - function that adds two numbers.
 * @n1: an input characters of numbers
 * @n2: an input characters of numbers
 * @r: buffer that the function stores the result
 * @size_r: size of the buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	while (*n1)
	{
		
	}
}
/**
 * tonumber - converts string to number
 * @x: An input string
 * Return: number
 */
long tonumber(char *x)
{
	int len = strlen(x) - 1;
	long long num = pow(10, len);

	while (*x)
	{
		num += ((*x - '0') % 10) * pow(10, len);
		--len;
		++x;
	}
	return ((long long)num);
}
char tochar(long long x, int sr)
{
	int len;
	long i;
	
	len = 0;
	i = x;
	while (i > 10)
	{
		i /= 10;
		++len;
	}
	if (len > sr)
		len = sr;
	while ()
}
