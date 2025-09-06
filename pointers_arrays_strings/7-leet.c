/**
* *leet - encodes a string into 1337.
* @s: a parameter
* Description: a function that encodes a string into 1337.
* Return: encoded string.
*/

#include"main.h"
char *leet(char *s)
{
	int i;
	char *coding = s;
	char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char ltr[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (*s != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*s == ltr[i])
				*s = num[i];
		}
		s++;
	}
	return (coding);
}
