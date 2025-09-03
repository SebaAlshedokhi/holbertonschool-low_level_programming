/**
* rev_string - prints a string.
* @s: pointer
* Description: a function that reverses a string.
*/

#include"main.h"
void rev_string(char *s)
{
	int i;
	int j;
	int length = 0;

	for (i=0 ; s[i] != '\0'; i++)
	length++;
	char c[length];

	for (i = 0; i <= length; i++)
	{
	c[i] = s[i];
	}

	for (i = 0; i < length; i++)
		for (j = (length - 1); j = 0; j--)
			s[i] = c[j];
}
