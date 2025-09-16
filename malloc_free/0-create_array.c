/**
* *create_array - creates an array of chars.
* @size: array size
* @c: initialize with.
* Description: a function that creates an array of chars,
* and initializes it with a specific char.
* Return: pointer or NULL
*/

#include<stdlib.h>
#include<stdio.h>
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	start = ptr;
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
