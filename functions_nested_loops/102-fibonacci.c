/**
* main -  Fibonacci numbers.
* Description:   prints the first 50 Fibonacci numbers.
*
* Return: Always 0
*/

#include<stdio.h>
int main(void)
{
	int i;
	long int third;
	long int first = 1;
	long int second = 2;

	printf("%ld, %ld", first, second);
	for (i = 3; i <= 50; i++)
	{
		third = first + second;
		printf(", %ld", third);
		first = second;
		second = third;
	}
	printf("\n");
	return (0);
}
