#include "lists.h"
/**
  * list_len - Returns the number of elements in a linked list.
  * @h: Pointer to a struct.
  *
  * Return: > 0 success, 0 otherwise.
*/

size_t list_len(const list_t *h)
{
	const list_t *temp;
	int count;

	temp = h;
	count = 0;
	while (temp != 0)
	{
		if (temp->str != NULL)
		{
			temp = temp->next;
			count++;
		}
		else
		{
			temp = temp->next;
			count++;
		}
	}
	return (count);
}
