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
	s = s - 1;

	for (i = 0 ; s[i] != '\0'; i++)
		length++;
	for (s[length - 1]; s[0]; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
