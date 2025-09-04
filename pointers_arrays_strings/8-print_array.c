/**
* print_array - prints  n elements of an array.
* @a: pointer
* @n: parameter
* Description: a function that prints n elements of an array of integers.
*/

#include<stdio.h>
void print_array(int *a, int n)
{
	int i;

	if (n == 0)
		return;

	printf("%d", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}
