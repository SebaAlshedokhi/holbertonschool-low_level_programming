/**
* add -  adds two integers.
* @a: first ineger.
* @b: second integer.
* Description:  a function that adds two integers and returns the result.
* Return: result of adding a and b.
*/

#include"main.h"
int add(int a, int b)
{
	int result;

	result = a + b;

	if (result > 9)
	{
		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');
	}
	else
		_putchar(result + '0');
		_putchar('\n');
		return(result);
}
