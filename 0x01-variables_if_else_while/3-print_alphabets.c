#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char up, low;

	for (up = 'A'; up <= 'Z'; up++)
		putchar(up);
	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}