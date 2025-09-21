/**
 * print_name - prints a name
 * @name: pointer
 * @f: function pointer
 * Description: a function that prints a name
 */

#include<stdio.h>
#include"function_pointers.h"
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
