/**
* reverse_array - reverses the content.
* @a: pointer
* @n: number of elements of the array
* Description: a function that reverses the content of an array of integers.
*/

#include"main.h"
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int rev;

	while (i < j)
	{
		rev = a[i];
		a[i] = a[j];
		a[j] = rev;
		i++;
		j--;
	}
}
