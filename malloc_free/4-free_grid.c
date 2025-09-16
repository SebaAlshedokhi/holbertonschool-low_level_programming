/**
* free_grid - frees 2 dimensional array
* @grid: double pointer
* @height: number
* Description: a function that frees 2 dimensional array.
*/

#include<stdlib.h>
#include<stdio.h>
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
