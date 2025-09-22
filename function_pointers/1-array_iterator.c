/**
 * array_iterator - executes function
 * @array: pointer
 * @size: size
 * @struct action: function to executes
 * Description: a function that executes a function given as a paramete
 */

#include"function_pointers.h"
#include<stdio.h>
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]0;
}
