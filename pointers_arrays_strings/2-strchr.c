/**
* *_strchr - locates a character in a string.
* @s: pointer
* @c: number of bytes
* Description: a function that locates a character in a string.
* Return: char
*/

#include"main.h"
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
