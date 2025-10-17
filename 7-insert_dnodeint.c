#include "lists.h"
#include <stdlib.h>

/**
	* insert_dnodeint_at_index - insert node at given index
	* @h: head
	* @idx: index
	* @n: value
	* Return: address of new node or NULL
	*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp = *h;
	unsigned int i;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (i = 0; tmp && i < idx - 1; i++)
		tmp = tmp->next;
	if (!tmp)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = tmp->next;
	new_node->prev = tmp;
	if (tmp->next)
		tmp->next->prev = new_node;
	tmp->next = new_node;
	return (new_node);
}

