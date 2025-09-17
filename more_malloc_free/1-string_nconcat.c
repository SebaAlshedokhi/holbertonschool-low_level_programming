/**
* *string_nconcat - concatenates two strings
* @s1: pointer
* @s2: pointer
* @n: size
* Description: a function that concatenates two strings.
* Return: pointer
*/

#include<stdio.h>
#include<stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc, *start1, *start2;
	unsigned int i, length1 = 0, length2 = 0;

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
	if (n >= length2)
		n = length2;
	conc = malloc(length1 + n + 1);
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		conc[i] = s1[i];
	for (i = 0; i < n ; i++)
		conc[i + length1] = s2[i];
	conc[length1 + n] = '\0';
	return (conc);
}
