#include "main.h"

/**
 * _memset - a function that fills memory with constant bytes
 * @s: location to fille
 * @b: char used to fill location
 * @n: number of bytes to fill
 * Return: pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *track = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (track);
}
