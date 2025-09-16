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
	char *conc, *start1, *start2;
	int i, length1, length2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	start1 = s1;
	start2 = s2;
	while (*s1 != '\0')
	{
		length1++;
		s1++;
	}
	while (*s2 != '\0')
	{
		length2++;
		s2++;
	}
	s1 = start1;
	s2 = start2;
	conc = malloc(length1 + length2 + 1);
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
	{
		conc[i] = s1[i];
	}
	for (i = 0; i < length2 ; i++)
	{
		conc[i + length1] = s2[i];
	}
	conc[length1 + length2] = '\0';
	return (conc);
}
