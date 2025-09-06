/**
* *cap_string - capitalizes all words of a string.
* @str: pointer
* Description: a function that capitalizes all words of a string.
* Return: a string.
*/

#include"main.h"
char *cap_string(char *str)
{
	char *start = str;
	int new_word = 1;
	
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ',' || *str == ';' || *str == '.' || *str == '!' || *str == '?' || *str == '"' || *str == '(' || *str == ')' || *str == '{' || *str == '}')
			new_word = 1;
		else if (new_word && (*str >= 'a' && *str <= 'z'))
		{
			*str = *str - ('a' - 'A');
			new_word = 0;
		}
		else
			new_word = 0;
			str++;
	}
	return (start);
}

