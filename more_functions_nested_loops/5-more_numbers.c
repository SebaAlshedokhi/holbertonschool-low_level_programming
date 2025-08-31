/**
* more_numbers - prints numbers.
*
* Description:  a function that prints the numbers, from 0 to 14.
*
*/

#include"main.h"
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar(49);
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
