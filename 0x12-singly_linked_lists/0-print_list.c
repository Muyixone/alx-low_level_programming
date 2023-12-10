#include "lists.h"
/**
  * print_list - Prints the elements of a list.
  * @h: A pointer to the struct list.
  *
  * Return: The number of nodes.
*/

size_t print_list(const list_t *h)
{
	char *str_val;
	int count;

	count = 0;
	while (h != 0)
	{
		str_val = temp->str;
		if (str_val != NULL)
		{
			printf("[%u] %s\n", temp->len, str_val);
			temp = temp->next;
			count++;
		}
		else
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			count++;
		}
	}
	return (count);
}
