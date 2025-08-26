/**
* main -  a program that prints all the numbers of base 16 in lowercase.
* Descriptioni: Write  a program that prints all the numbers of base 16 in lowercase.
* Return: Always 0 (Success)
*/

#include<stdio.h>

int main(void)
{
	int n = 0;
	char l = 'a';

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	while (l <= 'f')
	{
		printf("%c", l);
		l++;
	}

	printf("\n");

	return (0);
}
