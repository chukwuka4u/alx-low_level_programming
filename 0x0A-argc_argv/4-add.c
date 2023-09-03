#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	int i, num, result;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i] != '\0'; ++i)
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);

	return (0);
}
