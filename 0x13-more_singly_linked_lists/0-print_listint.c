#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: a pointer to the first node
 *
 * Return: the number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	if (!h)
	{
		return (elements);
	}
	while (h)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}
	return (elements);
}

