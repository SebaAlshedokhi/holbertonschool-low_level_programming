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
	char *start1, *start2;
	int length = 0;

	if (str == NULL)
		return (NULL);
	start1 = str;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	str = start1;
	strcp = malloc(length + 1);
	if (strcp == NULL)
		return (NULL);
	start2 = strcp;
	while (*str != '\0')
	{
		*strcp = *str;
		str++;
		strcp++;
	}
	*strcp = '\0';
	strcp = start2;
	return (strcp);
}
