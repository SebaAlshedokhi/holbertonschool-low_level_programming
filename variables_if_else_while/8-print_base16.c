/**
* main -  a program that prints all the numbers of base 16 in lowercase.
* Descriptioni: Write  a program that prints all the numbers of base 16 in lowercase.
* Return: Always 0 (Success)
*/

#include<stdio.h>

int main(void)
{
	char n = 48;
	char l = 'a';

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}

	putchar('\n');

	return (0);
}
