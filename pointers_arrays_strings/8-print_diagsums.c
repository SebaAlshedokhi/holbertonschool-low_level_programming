/**
* print_diagsums - prints the sum of a square matrix.
* @a: pointer
* @size: integer
* Description: prints the sum of the two diagonals of
* a square matrix of integers.
*/

#include"main.h"
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum += a[i][j];
			else if (j == (size - i))
				sum2 += a[i][j];
		}
	}
	printf("%d, %d", sum1, sum2);
}
