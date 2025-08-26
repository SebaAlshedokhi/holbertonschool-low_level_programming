/**
* main -  a program that prints the alphabet in lowercase.
* Description: This program use putchar function to print the alphabet in lower case
* Return: Always 0 (Success)
*/

#include<stdio.h>

int main(void)
{
	char lower = 97;
	char upper = 65;
	while (lower <= 122)
	{
		putchar(lower);
		lower++;
	};
	while (upper <= 90)
	{
		putchar(upper);
		upper++;
	};
	return (0);
}

