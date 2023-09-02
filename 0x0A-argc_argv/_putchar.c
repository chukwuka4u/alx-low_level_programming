#include "main.h"
#include <unistd.h>

/**
 * _putchar - print character to output
 * @c: A character argument to be printed to output
 * Return: integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
