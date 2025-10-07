#include"lists.h"
/**
* add_node_end - adds a new node at the end
* @head: head
* @str: char
* Description: a function that adds a new node at the end
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end, *temp;
	int i = 0;
	size_t length = 0;

	if (str == NULL)
		return (NULL);
	new_end = malloc(sizeof(list_t));
	if (new_end == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	new_end->str = strdup(str);
	if (new_end->str == NULL)
	{
		free(new_end);
		return (NULL);
	}
	while (str[i])
	{
		length++;
		i++;
	}
	new_end->len = length;
	new_end->next = 0;
	if (head == 0)
		*head = temp = new_end;
	else
	{
	temp->next = new_end;
	temp = new_end;
	}
	return (new_end);
}
