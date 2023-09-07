#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all of the arguments of your program
 * @ac: argument count
 * @av: argument vector, the number of arguments passed as an array of strings
 * Return: A character pointer to the concatenated string or NULL if fail
 */
char *argstostr(int ac, char **av)
{
	char *nstr;
	int len, i, j, k;

	len = i = j = k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (; i < ac; ++i, len++)
		for (; av[i][j]; ++j)
			len++;

	len++;
	nstr = malloc(len * sizeof(char));
	if (nstr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			nstr[k] = av[i][j];
			k++;
		}
		nstr[k] = '\n';
		k++;
	}
	nstr[k] = '\0';

	return(nstr);
}
