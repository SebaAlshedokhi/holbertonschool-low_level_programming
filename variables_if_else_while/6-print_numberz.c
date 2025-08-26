/**
* main -  a program that prints all single digit numbers.
* Descriptioni: It is a program to print all single digit numbers of base 10.
* Return: Always 0 (Success)
*/
#include<stdio.h>
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
