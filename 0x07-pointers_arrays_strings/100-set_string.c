#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to the char to
 * @to: char to which s is pointing
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
