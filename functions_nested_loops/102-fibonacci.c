/**
* main -  Fibonacci numbers.
* Description:   prints the first 50 Fibonacci numbers.
*
* Return: Always 0
*/

#include<stdio.h>
int main(void)
{
	long int i, third;
	long int first = 1;
	long int second = 2;

	printf("%Id, %Id", first, second);
	for (i = 3; i <= 50; i++)
	{
		third = first + second;
		printf(", %Id", third);
		first = second;
		second = third;
	}
	printf("\n");
	return (0);
}
