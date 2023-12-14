#include "lists.h"
/**
  * free_listint2 - Frees dynamically allocated memory.
  * @head: Pointer to a pointer parameter.
  * Return: Nothing.
*/

void free_listint2(listint_t **head)
{
	listint_t *current, *next_node;

	current = *head;	
	if (current == NULL)
		free(*head);
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
