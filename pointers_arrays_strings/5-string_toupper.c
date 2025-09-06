/**
* *string_toupper - changes all lowercase letters to uppercase.
* @str: pointer
* Description: a function that changes all lowercase letters to uppercase.
* Return: a string.
*/

#include"main.h"
char *string_toupper(char *str)
{
	int i;
	char *start = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		*str = *str - ('a' - 'A');
	str++;
	}
	return (start);
}
