/**
* rev_string - prints a string.
* @s: pointer
* Description: a function that reverses a string.
*/

#include"main.h"
void rev_string(char *s)
{
	int i = 0;
	int j;
	int length = 0;
	char swp;

	for (i=0 ; s[i] != '\0'; i++)
	length++;
	j = length - 1;
	i = 0;
	while ( i < j )
	{
		swp = s[i];
		s[i] = s[j];
		s[j] = swp;
		i++;
		j--;
	}
}
