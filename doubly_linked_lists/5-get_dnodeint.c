#include"lists.h"
/**
* get_dnodeint_at_index - returns the nth node
* @head: head
* @index: index
* Description: a function that returns the nth node
* Return: the nth node, or NULL if not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	while (tmp)
	{
		tmp = tmp->next;
		counter++;
	}
	if (index >= counter)
		return (NULL);
	tmp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
