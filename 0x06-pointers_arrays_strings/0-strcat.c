#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: An input character pointer
 * @src: An input character pointer
 * Return: A pointer
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';

	return (temp);
}
