/**
* _puts - prints a string.
* @str: pointer
* Description: a function that prints a string.
*/

#include"main.h"
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar('*str);
		str++;
	}
	_putchar('\n');
}
