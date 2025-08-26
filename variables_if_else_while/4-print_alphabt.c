/**
* main -  a program that prints the alphabet in lowercases.
* Descriptioni: This program use putchar to print the alphabet in lowercases
* Return: Always 0 (Success)
*/

#include<stdio.h>

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		putchar(c);
	};
	putchar('\n');

	return (0);
}
