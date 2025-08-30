/**
* main - sum of product.
*
* Description: To print the sum of 3 and 5 multiples.
* Return: Always 0.
*/

#include<stdio.h>
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
			sum+= i;
		else
		{
			if ((i % 5) == 0)
			sum+= i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
