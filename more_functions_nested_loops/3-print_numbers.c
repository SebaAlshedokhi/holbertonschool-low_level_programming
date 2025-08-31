/**
* print_numbers - prints numbers.
*
* Description:  a function that prints the numbers, from 0 to 9.
*
*/

#include"main.h"

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		_putchar(i + '0');
	_putchar('\n');
}
