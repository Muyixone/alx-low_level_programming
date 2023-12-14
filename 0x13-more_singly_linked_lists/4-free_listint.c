#include "lists.h"
/**
  * free_listint - Frees dynamically allocated memory for list.
  * @head: Points to first node in the list.
  * Return: Nothing.
*/

void free_listint(listint_t *head)
{
	listint_t *current, *next_node;

	current = head;
	if (head == NULL)
		free(head);
	else
	{
		while (current != NULL)
		{
			next_node = current->next;
			free(current);
			current = next_node;
		}
	}
}
