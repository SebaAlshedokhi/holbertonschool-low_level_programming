/**
* swap_int - swaps the values.
* @a: pointer 1
* @b: pointer 2
* Description: a function that swaps the values of two integers.
*/

#include"main.h"
void swap_int(int *a, int *b)
{
	int *c;

	*c = *a;
	*a = *b;
	*b = *c;
}
