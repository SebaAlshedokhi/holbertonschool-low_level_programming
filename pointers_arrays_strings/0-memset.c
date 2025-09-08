/**
* *_memset -  fills memory with a constant byte.
* @s: pointer
* @b: constant
* @n: number of bytes
* Description: a function that fills memory with a constant byte.
* Return: char
*/

#include"main.h"
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
