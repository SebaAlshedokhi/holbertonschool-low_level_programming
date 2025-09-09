/**
* _strlen_recursion - returns the length.
* @s: pointer
* Description: a function that returns the length of a string.
* Return: length.
*/

#include"main.h"
int _strlen_recursion(char *s)
{
	int count = 0;
	if (*s != '\0')
		count++;
	return (count);
}
