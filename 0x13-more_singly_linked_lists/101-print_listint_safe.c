#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t count = 0;

	if (head == NULL)
		return (0);

	slow_ptr = head;
	fast_ptr = head;

	while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		count++;

		if (slow_ptr == fast_ptr)
		{
			printf("Infinite loop detected\n");
			exit(98);
		}
	}

	return (count);
}
