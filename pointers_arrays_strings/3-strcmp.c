/**
* _strcmp - compares two strings.
* @s1: pointer
* @s2: pointer
* Description: a function that compares two strings.
* Return: an integer.
*/

#include"main.h"
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
	i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
