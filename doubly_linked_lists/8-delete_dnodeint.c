#include"lists.h"
/**
* delete_dnodeint_at_index - deletes a node at a given position
* @head: head
* @index: index
* Description: a function that deletes a node at a given position
* Return: 1 if it succeeded, -1 if it failed
*/
#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp && i < index; i++)
		tmp = tmp->next;
	if (!tmp)
		return (-1);
	if (tmp->prev)
		tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
