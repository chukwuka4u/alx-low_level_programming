#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: struct of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nwdog;
	char *cpyname, *cpyowner;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL  || owner == NULL)
		return (NULL);
	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;
	nwdog = malloc(sizeof(dog_t));
	if (nwdog == NULL)
		return (NULL);
	cpyname = malloc(len_name + 1);
	if (cpyname == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		cpyname[i] = name[i];
	cpyname[i] = '\0';

	cpyowner = malloc(len_owner + 1);
	if (cpyowner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		cpyowner[i] = owner[i];
	cpyowner[i] = '\0';

	nwdog->name = cpyname;
	nwdog->age = age;
	nwdog->owner = cpyowner;

	return (nwdog);
}
