#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints the contents of a struct dog
 * @d: Pointer to a struct dog variable
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If an element is NULL, it prints "(nil)" in its place.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

