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
	int i;
	char *start = dest;
	int length = 0;

	for (i = 0; dest[i] != '\0'; i++)
		length++;
 
	while (*src != '\0')
	{
		dest + length = src;
		dest++;
		src++;
	}
	dest + length = '\0';
	dest = start;
	return (dest);
}
