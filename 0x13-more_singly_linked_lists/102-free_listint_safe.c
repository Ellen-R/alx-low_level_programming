#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: pointer to the pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next_node;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		next_node = current->next;

		free(current);
		count++;

		current = next_node;

		if (current == *h)
		{
			*h = NULL; /* Set the head to NULL after freeing the list*/
			break;
		}
	}

	return (count);
}
