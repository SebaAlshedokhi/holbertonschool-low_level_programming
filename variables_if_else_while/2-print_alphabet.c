/**
* main -  a program that prints the alphabet in lowercase.
* Description: This program use putchar function to print the alphabet in lower case
* Return: Always 0 (Success)
*/

#include<stdio.h>

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');

	return (0);
}
