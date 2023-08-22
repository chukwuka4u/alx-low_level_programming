#include "main.h"

/**
 * _strcpy - function that copies the strin gopinted to by src,
 * including the terminating null byte (\0), to the buffer ointed to by
 * dest.
 * @dest: An input character
 * @src: An input character
 * Return: Character
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (len = 0; src[len] != '\0'; ++len)
		;
	for (i = 0; i <= len; ++i)
		dest[i] = src[i];

	return (dest);
}
