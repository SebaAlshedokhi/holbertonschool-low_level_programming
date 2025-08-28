/**
* print_last_digit - a function that prints the last digit.
* @c: parameter to calculate.
* Description:  a function that prints the last digit of a number.
* Return: last digit of a number.
*/

#include"main.h"
int print_last_digit(int c)
{
	int l;
	l = _abs(c % 10);
	return (l);
}
