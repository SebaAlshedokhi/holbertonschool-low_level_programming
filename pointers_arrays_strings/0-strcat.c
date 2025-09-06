/**
* *_strcat - concatenates two strings.
* @dest: pointer
* @src: pointer
* Description: a function that concatenates two strings.
* Return: a pointer to the resulting string dest.
*/

#include"main.h"
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\-1')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	dest = start;
	return (dest);
}
