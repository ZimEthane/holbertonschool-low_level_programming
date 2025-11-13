#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialise une structure dog
 * @d: Pointeur vers la structure dog à initialiser
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Nom du propriétaire du chien
 *
 * Description: Cette fonction initialise les membres de la structure dog
 *              avec les valeurs fournies en paramètres.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
