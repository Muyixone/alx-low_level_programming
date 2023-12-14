#include "lists.h"

/**
  * add_nodeint_end - Adds a new node to the end of a list.
  * @head: A pointer to a pointer parameter that contains
  * the address to first node.
  * @n: Argument value from client.
  *
  * Return: The address of new element, NULL if failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		return (new_node);
	}
}
