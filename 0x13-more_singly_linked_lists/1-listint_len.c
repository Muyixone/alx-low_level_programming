#include "lists.h"
/**
  * listint_len - Gets the number of elements in a list.
  * @h: Pointer parameter to first node in the list.
  * Return: Greater than 0 on success, 0 otherwise.
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
