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
	UNUSED(argc);

	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
