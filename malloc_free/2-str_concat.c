/**
* *str_concat - concatenates two strings
* @s1: string
* @s2: string
* Description: a function that concatenates two strings.
* Return: pointer or NULL
*/

#include<stdlib.h>
#include<stdio.h>
char *str_concat(char *s1, char *s2)
{
	char *conc;
	char *start;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	conc = malloc(strlen(s1) + strlen(s2) + 1);
	if (conc == NULL)
		return (NULL);
	start = conc;
	while (*s1 != '\0')
	{
		*conc = *s1;
		s1++;
		conc++;
	}
	while (*s2 != '\0')
	{
		*conc = *s2;
		s2++;
		conc++;
	}
	*conc = '\0';
	conc = start;
	return (conc);
}
