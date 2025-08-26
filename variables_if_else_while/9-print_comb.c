/**
* main -  a program that prints all the numbers of base 16 in lowercase.
* Descriptioni: A program that prints all the numbers of base 16 in lowercase.
* Return: Always 0 (Success)
*/

#include<stdio.h>

int main(void)
{
	int n = 48;

	while (n <= 57 )
	{
		putchar(n);
		
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
