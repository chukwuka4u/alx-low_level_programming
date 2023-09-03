#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);

	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
