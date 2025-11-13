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
	dog_t *new_dog_instance;

	new_dog_instance = malloc(sizeof(dog_t));

	if (new_dog_instance == NULL)
	{
		return (NULL);
	}

	new_dog_instance->name = name;
	new_dog_instance->age = age;
	new_dog_instance->owner = owner;

	return (new_dog_instance);
}
