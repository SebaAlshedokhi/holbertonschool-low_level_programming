/**
* factorial - returns the factorial.
* @n: number
* Description: a function that returns the factorial of a given number.
* Return: factorial.
*/

#include"main.h"
int factorial(int n)
{
	int fact = 1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	fact = n * (factorial(n - 1));
	return (fact);
}
