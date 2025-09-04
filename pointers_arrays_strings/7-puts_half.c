/**
* puts_half - prints half of a string.
* @str: pointer
* Description: a function that prints half of a string.
*/

#include"main.h"
void puts_half(char *str)
{
	int i, j, n;
	int length_of_the_string = 0;

	for (i = 0 ; str[i] != '\0'; i++)
	length_of_the_string++;

	if ((length_of_the_string % 2) == 0)
		n = length_of_the_string / 2;
	else
		n = (length_of_the_string + 1) / 2;

	for (j = n; j < length_of_the_string; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
