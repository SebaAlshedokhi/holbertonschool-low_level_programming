/**
* **alloc_grid - returns a pointer to a 2 dimensional array
* @s1: string
* @s2: string
* Description: a function that returns a pointer to a
* 2 dimensional array of integers.
* Return: pointer or NULL or 0
*/

#include<stdlib.h>
#include<stdio.h>
int **alloc_grid(int width, int height)
{
	int **grid;
	int *box;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	box = malloc(sizeof(int) * height * width);
	if (box == NULL)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		grid[i] = box + (i * width);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	free(box);
	return (grid);
}
