/**
* print_rev - prints a string.
* @*s: pointer
* Description: a function that prints a string, in reverse.
*/

#include"main.h"
void print_rev(char *s)
{
	int i;
	int length = 0;
	char *a = s;

	for (i = 0 ; s[i] != '\0'; i++)
		length++;
	for (s = s + (length - 1); s >= a; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
