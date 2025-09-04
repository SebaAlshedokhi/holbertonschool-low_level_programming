/**
* print_array - prints  n elements of an array.
* @s: pointer
* @n: parameter
* Description: a function that prints n elements of an array of integers.
*/

#include<stdio.h>
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
