/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: number
* Description: a function that returns the natural square root of a number.
* Return: square root.
*/

#include"main.h"
int _sqrt_recursion(int n)
{
	int x;

	if (n < 0 || x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	_sqrt_recursion(x + 1);
}
