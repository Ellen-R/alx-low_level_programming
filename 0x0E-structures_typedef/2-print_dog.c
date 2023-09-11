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
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.2f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
