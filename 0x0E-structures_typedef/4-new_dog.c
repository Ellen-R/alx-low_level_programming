#include "dog.h"
#include <stdlib.h>


/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: A pointer to the newly allocated duplicated string.
 *         NULL if memory allocation fails or str is NULL.
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	 dup_str = malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}

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
	dog_t *new_dog;
	
	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
