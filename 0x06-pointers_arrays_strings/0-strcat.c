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
	int i;

	while (*dest)
		dest++;
	for (i = 0; src[i] != '\0'; ++i)
		*dest++ = src[i];
	*dest = '\0';

	return (temp);
}
