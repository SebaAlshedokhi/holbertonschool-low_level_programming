/**
 * *_calloc - allocates memory for an array
 * @nmemb: number
 * @size: size
 * Description: a function that allocates memory for an array, using malloc.
 */

#include<stdio.h>
#include<stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr= malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return ((void*)ptr);
}
