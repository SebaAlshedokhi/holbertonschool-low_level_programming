/**
* print_times_table -  function that prints the n times table.
* @n : times table.
* Description: a function that prints the n times table, starting with 0.
*/

#include"main.h"
void print_times_table(int n)
{
	if ((n <= 15) && (n >= 0))
	{
		int i, j, prod;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;
				if (j == 0)
				{
					_putchar(prod + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (prod < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(prod + '0');
					}
					else
					{
						if (prod >= 100)
						{
							_putchar((prod / 100) + '0');
							_putchar((prod / 10) + '0');
							_putchar((prod % 10) + '0');
						}
						else
						{
							_putchar(' ');
							_putchar((prod / 10) + '0');
							_putchar((prod % 10) + '0');
						}
					}

				}
			}
			_putchar('\n');
		}
	}
}
