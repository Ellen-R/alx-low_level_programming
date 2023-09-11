#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog and stores copies of name and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function creates a new dog with the provided attributes.
 * It allocates memory for the new dog, copies the name and owner strings,
 * and returns a pointer to the new dog.
 * Return: If memory allocation fails or if any input is NULL, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return (NULL);

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
