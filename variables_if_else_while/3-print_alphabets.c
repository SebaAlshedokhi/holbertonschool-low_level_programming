/**
* main -  a program that prints the alphabet in lower and upper cases.
* Descriptioni: This program use putchar to print the alphabet in two cases
* Return: Always 0 (Success)
*/

#include<stdio.h>

int main(void)
{
char c;
char C;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (C = 'A'; C <= 'Z'; C++)
putchar(C);
putchar('\n');

return (0);
}
