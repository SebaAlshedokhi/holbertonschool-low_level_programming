/**
* print_chessboard - prints the chessboard.
* @a[8]: 2D array
* Description: a function that prints the chessboard.
*/

#include"main.h"
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[j]);
		}
		_putchar('\n');
	}
}
