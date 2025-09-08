/**
* *_strstr -  locates a substring.
* @haystack: pointer
* @needle: pointer
* Description: a function that  locates a substring.
* Return: char
*/

#include<stddef.h>
#include"main.h"
char *_strstr(char *haystack, char *needle)
{
	char *start = needle;
	char *loc;

	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		loc = haystack;
		while (*needle != '\0')
		{
			if (*haystack != *needle)
				break;
			needle++;
			haystack++;
		}
		if (*needle == '\0')
			return (loc);

		needle = start;
		haystack = loc + 1;
	}
	return (NULL);
}
