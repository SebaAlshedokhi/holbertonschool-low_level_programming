/**
* _pow_recursion - returns the value of x raised to the power of y.
* @x: base
* @y: power
* Description: a function that returns the value of
* x raised to the power of y.
* Return: result.
*/

#include"main.h"
int _pow_recursion(int x, int y)
{
	int pow;

	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	pow = x * _pow_recursion(x, (y - 1));
	return (pow);
}
