/**
* print_alphabet -  a program that prints the alphabet in lowercase.
* Description: This program use putchar to print the alphabet in lower case
*/

#include"main.h"

void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
