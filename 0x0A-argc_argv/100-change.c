#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int money, result = 0, i = 0;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		money = atoi(argv[1]);

	while (*(change + i))
	{
		if (money / *(change + i) >= 1)
		{
			result += money / *(change + i);
			money %= *(change + i);
		}
		++i;
	}

	printf("%d\n", result);
	return (0);
}
