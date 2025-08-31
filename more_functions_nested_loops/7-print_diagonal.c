/**
* print_diagonal - draws a straight line.
* @n : long of the line.
* Description:  a function that draws a straight line in the terminal.
*
*/

#include"main.h"
void print_diagonal(int n)
{
int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				else
				{
					if (i > j)
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
