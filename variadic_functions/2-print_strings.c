#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
* print_strings - prints strings with seperator
* @seperator: the seperator
* @n: the number of arguments
* @...: the strings to sum
* Description: a function that prints strings with seperator
*/
void print_strings(const char *seperator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)", i ? (seperator : "") : "\n");
	va_end(ap);
}
