/**
* print_times_table -  function that prints the n times table.
* @n : times table.
* Description: a function that prints the n times table, starting with 0.
*/
#include "main.h"
void print_times_table(int n)
{
int i, j, prod;
if (n >= 0 &&  n <=  15)
{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (prod < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
			_putchar(prod + '0');
			}
			else if (prod < 100)
			{
				if (j != 0)
					_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
			{
				_putchar((prod / 100) + '0');
				_putchar(((prod / 10) % 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
}
