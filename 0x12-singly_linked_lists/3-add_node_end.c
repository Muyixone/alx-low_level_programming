#include "lists.h"
/**
  * add_node_end - Adds a new node to the end of a linked list.
  * @head: A pointer to a pointer parameter.
  * Contains the address of the head pointing to the first node in the list.
  * @str: A string parameter.
  *
  * Return: The address of the new element.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;
	size_t count = 0;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL || new_node == NULL)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}
	while (new_node->str[count] != '\0')
		count++;
	new_node->len = count;
	new_node->next = NULL;
	temp_node = *head;
	if (temp_node == NULL)
		*head = new_node;
	else
	{
		while (temp_node->next != NULL)
			temp_node = temp_node->next;
		temp_node->next = new_node;
	}
	return (*head);
}
