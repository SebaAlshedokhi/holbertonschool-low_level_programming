/**
* print_to_98 - prints natural numbers.
* @n : starting number.
* Description : a function that prints all natural numbers from n to 98,
* allowed to use the standard library
*/

#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
		}
	}
}
