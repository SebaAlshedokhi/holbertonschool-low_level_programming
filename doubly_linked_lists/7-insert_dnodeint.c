#include"lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: head
* @idx: index
* @n: int
* Description: a function that inserts a new node at a given position
* Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!head || !new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp)
	{
		if (i == idx -1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		i++;
		tmp = tmp->next;
	}
	free(new_node)
	return (NULL);
}
