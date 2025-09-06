/**
* *_strncpy - copies a strings.
* @dest: pointer
* @src: pointer
* @n: integer
* Description: a function that copies a string.
* Return: a pointer to the resulting string dest.
*/

#include"main.h"
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	int count = 0;

	while (*src != '\0' && count < n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	while (count < n)
	{
		*dest = '\0';
		dest++;
		count++;
	}
	dest = start;
	return (dest);
}
