#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
* print_numbers - prints numbers with seperator
* @seperator: the seperator
* @n: the number of arguments
* @...: the integers to sum
* Description: a function that prints numbers with seperator
*/
void print_numbers(const char *seperator, const unsignes int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int), i ? (seperator : "") : "\n");
	va_end(ap);
}
