/**
* print_alphabet_x10 - function that prints 10 times
* Description: a function that prints 10 times the alphabet, in lowercase, followed by a new line.
*/

#include"main.h"
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
		_putchar('\n');
	}
}
