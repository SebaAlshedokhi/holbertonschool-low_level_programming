/**
* print_last_digit - a function that prints the last digit.
* @c: parameter to calculate.
* Description:  a function that prints the last digit of a number.
* Return: last digit of a number.
*/

#include"main.h"
int print_last_digit(int c)
{
	if (c >= 0)
		return (c % 10);
	else
		return (-c % 10);
}
