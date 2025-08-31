/**
* print_line - draws a straight line.
* @n : long of the line.
* Description:  a function that draws a straight line in the terminal.
*
*/

#include"main.h"
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
