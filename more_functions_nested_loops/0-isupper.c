/**
* _isupper - checks for uppercase character.
* @c: to compare.
* Description: a function that checks for uppercase character.
* Return: 1 if c is uppercase and 0 otherwise.
*/

#include"main.h"

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
