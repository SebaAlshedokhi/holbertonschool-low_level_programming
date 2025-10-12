#include"lists.h"
/**
* get_dnodeint_at_index - returns the sum of n's
* @head: head
* @index: index
* Description: a function that returns the sum of n's
* Return: returns the sum or 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (*head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
