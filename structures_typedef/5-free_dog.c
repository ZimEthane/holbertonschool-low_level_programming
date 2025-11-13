#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Libère la mémoire allouée pour une instance de dog_t
 * @d: Pointeur vers l'instance de dog_t à libérer
 *
 * Description: Cette fonction libère la mémoire allouée pour le nom et le
 *              propriétaire du chien, ainsi que pour la structure elle-même.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}