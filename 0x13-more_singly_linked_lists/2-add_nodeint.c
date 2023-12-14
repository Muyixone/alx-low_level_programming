#include "lists.h"
/**
  * add_nodeint - Adds a new node at the beginning of a list.
  * @head: A pointer to a pointer paramter. Contains the address of the head.
  * @n: Argument from client.
  *
  * Return: Address of new element created, NULL if failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = (listint_t *) malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = *head;
	*head = current;

	return (*head);
}
