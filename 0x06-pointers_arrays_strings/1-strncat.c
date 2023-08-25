#include "main.h"

/**
 * _strncat - function that concatenates string
 * @dest: An input character
 * @src: An input character
 * @n: An input integer
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest, *aux = src;
	int srclen = 0, i;

	while (*aux)
	{
		++srclen;
		aux++;
	}
	if (n < srclen)
		srclen = n;

	while (*dest)
		dest++;

	for (i = 0; i < srclen; ++i)
		*dest++ = src[i];
	*dest = '\0';

	return (temp);
}
