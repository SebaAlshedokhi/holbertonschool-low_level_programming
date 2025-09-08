/**
* *_strpbrk - searches a string.
* @s: pointer
* @accept: pointer
* Description: a function that searches a string for any of a set of bytes.
* Return: char
*/

#include"main.h"
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
		accept = start;
	}
	return (NULL);
}
