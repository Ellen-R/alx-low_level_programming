#include "dog.h"
#include <stdlib.h>


/**
 * free_dog - Frees memory allocated for a dog
 * @d: Pointer to a struct dog variable
 *
 * Description: This function frees the memory allocated for the
 * name, owner, and the dog structure itself.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);

		if (d->owner)
			free(d->owner);

		free(d);
	}
}
