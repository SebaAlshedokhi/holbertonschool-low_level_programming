#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
* print_strings - prints strings with seperator
* @seperator: the seperator
* @n: the number of arguments
* Description: a function that prints strings with seperator
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	char *str;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		printf("%s", str ? str : "(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
