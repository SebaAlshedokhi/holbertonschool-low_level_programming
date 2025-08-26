/**
* main -  a program that prints the alphabet in lowercase.
* Description: This program use putchar function to print the alphabet in lower case
* Return: Always 0 (Success)
*/

#include<stdio.h>

int main(void)
{
	char lower = 97;
	while (lower <= 121)
	{
		putchar(lower);
		lower++;
	};
	return (0);
}

