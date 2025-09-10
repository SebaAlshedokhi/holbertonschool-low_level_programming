/**
* _sqrt_helper - helper function.
* @n: number
* @x: number
* Description: a function that help recursion.
* Return: square root.
*/
int _sqrt_helper(int n, int x);
/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: number
* Description: a function that returns the natural square root of a number.
* Return: square root.
*/
#include"main.h"
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}

int _sqrt_helper(int n, int x)
{
	if ((x * x) == n)
		return (x);
	if ((x * x) > n)
		return (-1);
	return (_sqrt_helper(n, x + 1));
}
