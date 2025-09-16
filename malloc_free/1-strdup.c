/**
* *_strdup - returns a pointer to a newly allocated space
* @str: string
* Description: a function thatreturns a pointer to a newly allocated space.
* Return: pointer or NULL
*/

#include<stdlib.h>
#include<stdio.h>
char *_strdup(char *str)
{
	char *strcp;
	char *start;

	if (str == NULL)
		return (NULL);
	strcp = malloc(strlen(str) + 1);
	if (strcp == NULL)
		return (NULL);
	start = strcp;
	while (*str != '\0')
	{
		*strcp = *str;
		str++;
		strcp++;
	}
	*strcp = '\0';
	strcp = start;
	return (strcp);
}
