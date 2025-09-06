/**
* *_strncat - concatenates two strings.
* @dest: pointer
* @src: pointer
* @n: integer
* Description: a function that concatenates two strings.
* Return: a pointer to the resulting string dest.
*/

#include"main.h"
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;
	int count = 0;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && count < n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	dest = start;
	return (dest);
}
