#include"lists.h"
/**
* add_node - adds a new node at the beginning
* @head: head
* @str: char
* Description: a function that adds a new node at the beginning
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i;
	unsigned int length = 0;
	
	newnode = malloc(sizeof(list_t));
	newnode->str = strdup(str);
	while (str[i])
	{
		length++;
		i++;
	}
	newnode->len = length;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
