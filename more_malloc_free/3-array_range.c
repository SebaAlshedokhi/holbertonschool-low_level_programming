/**
 * *array_range - creates an array of integers
 * @min: number
 * @max: number
 * Description: a function that creates an array of integers.
 * Return: pointer
 */

#include<stdio.h>
#include<stdlib.h>
int *array_range(int min, int max)
{
	int i = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
