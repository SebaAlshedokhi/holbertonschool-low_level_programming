/**
* times_table -  prints the 9 times table
* Description: a function that prints the 9 times table, starting with 0.
*
*/

#include"main.h"
void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * i;
			_putchar(mult + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
