#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 100
#define VAR 2772
#define VAR2 78
/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[LEN];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < LEN; i++)
	{
		pass[i] = rand() % VAR2;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((VAR - sum) - '0' < VAR2)
		{
			n = VAR - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
