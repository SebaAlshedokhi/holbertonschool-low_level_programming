/**
* print_last_digit - a function that prints the last digit.
* @c: parameter to calculate.
* Description:  a function that prints the last digit of a number.
* Return: last digit of a number.
*/

#include"main.h"
int print_last_digit(int c)
{
	int a;

	a = c % 10;
	if (c < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
