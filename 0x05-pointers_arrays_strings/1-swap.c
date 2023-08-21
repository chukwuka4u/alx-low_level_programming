#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: An input integer pointer
 * @b: An input integer pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
