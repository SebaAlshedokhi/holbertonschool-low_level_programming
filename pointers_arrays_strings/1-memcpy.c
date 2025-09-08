/**
* *_memcpy - copies memory area.
* @dest: pointer
* @src: pointer
* @n: number of bytes
* Description: a function that copies memory area.
* Return: char
*/

#include"main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *start = dest;

	for (i = 0; i < n; i++)
	dest[i] = src[i];
	dest = start;
	return (dest);
}
