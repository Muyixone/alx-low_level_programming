#include "lists.h"
/**
  * print_listint - Prints all elements of a list.
  * @h: Pointer parameter to list head.
  * Return: Value greater than 0 on success, 0 otherwise.
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t count;

	count = 0;
	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
