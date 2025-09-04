/**
* puts2 - prints every other character of a string.
* @str: pointer
* Description: a function that prints every other character of a string,
* starting with the first character.
*/

#include"main.h"
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
