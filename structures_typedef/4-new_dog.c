#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Crée une nouvelle instance de dog_t
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Nom du propriétaire du chien
 *
 * Return: Pointeur vers la nouvelle instance de dog_t, ou NULL en cas d'échec
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, name_len = 0, owner_len = 0;

	while (name && name[name_len])
		name_len++;
	while (owner && owner[owner_len])
		owner_len++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		new_dog->name[i] = name[i];
	new_dog->name[name_len] = '\0';

	new_dog->age = age;

	for (i = 0; i < owner_len; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[owner_len] = '\0';

	return (new_dog);
}
