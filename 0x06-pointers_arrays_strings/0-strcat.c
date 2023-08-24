#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: An input character pointer
 * @src: An input character pointer
 * Return: A pointer
 */
char *_strcat(char *dest, char *src)
{
	while (*dest++ != '\0')
		;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';

	return dest;
}
