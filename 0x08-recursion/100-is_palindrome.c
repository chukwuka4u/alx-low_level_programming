#include "main.h"
int _strlen(char *s);
int _helper(char *s, int len);

/**
 * is_palindrome - function returns 1 if a string is a palindrome and 0 if not
 * @s: An input argument string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);
	if (len <= 1)
		return (1);
	return (_helper(s, len));
}

/**
 * _strlen - function to get the length of the string
 * @s: An input string
 * Return: integer
 */
int _strlen(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen(s + 1) + 1);
}

/**
 * _helper -function to compare characters
 * @len: length of the string
 * @s: An input string
 * Return: A reverse string
 */
int _helper(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (_helper(s + 1, len - 2));
	}
	else
		return (0);
}
