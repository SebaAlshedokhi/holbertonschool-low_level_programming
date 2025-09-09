/**
* _puts_recursion - prints a string.
* @s: pointer
* Description: a function that prints a string, followed by a new line.
*/

#include"main.h"
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s);
	s++;
	_puts_recursion(s);
}
