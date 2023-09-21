#include "lists.h"
#include <stdio.h>

/**
 * startup_message - Prints a startup message before main.
 */
void startup_message(void) __attribute__((constructor));

void startup_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
