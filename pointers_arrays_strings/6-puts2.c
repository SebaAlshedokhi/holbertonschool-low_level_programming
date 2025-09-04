/**
* puts2 - prints every other character of a string.
* @str: pointer
* Description: a function that prints every other character of a string,
* starting with the first character.
*/

#include"main.h"
void puts2(char *str)
{
	int i, j;
	int length = 0;

	for (j=0 ; str[j] != '\0'; j++)
		length++;

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
