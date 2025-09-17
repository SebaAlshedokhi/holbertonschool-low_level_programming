/**
* *malloc_checked - allocates memory using malloc
* @b: number
* Description: a function that allocates memory using malloc.
* Return: pointer
*/

#include<stdio.h>
#include<stdlib.h>
void *malloc_checked(unsigned int b)
{	int *ptr = malloc(b);
	
	if (ptr == NULL)
		exit (98);
	return (ptr);
}
