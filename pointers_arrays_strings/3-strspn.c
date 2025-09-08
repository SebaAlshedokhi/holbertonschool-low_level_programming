/**
* _strspn - gets the length of a prefix substring.
* @s: pointer
* @accept: pointer
* Description: a function that gets the length of a prefix substring.
* Return: unsigned int
*/

#include"main.h"
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *start = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				s++;
				break;
			}
			accept++;
		}
		if (*accept == '\0')
			return (count);
		accept = start;
	}
	return (count);
}
