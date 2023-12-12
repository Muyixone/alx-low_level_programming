#include "lists.h"
/**
  * add_node - Function pointer to a struct.
  * @head: Pointer parameter to the first node in a linke list.
  * @str: String paramter. A variable in the struct list_t.
  *
  * Return: 1 on success, 0 otherwise.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t count = 0;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	while (new_node->str[count] != '\0')
		count++;
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;
	
	free(new_node->str);
	free(new_node);
	return (*head);
}
