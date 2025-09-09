/**
* _print_rev_recursion - prints a string.
* @s: pointer
* Description: a function that prints a string in reverse.
*/

#include"main.h"
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
