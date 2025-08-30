/**
 * main - sum of the even-valued.
 *
 * Description:  finds and prints the sum of the even-valued terms of fibonacci.
 * Return: Always 0
 */

#include<stoio.h>
int main(void)
{
	int first = 1;
	int second = 2;
	int third;
	int sum = 0;

	do
	{
		third = first + second;
		if ((third % 2) == 0)
			sum += third;
		first = second;
		second = third;
	} while (third <= 4000000);
	printf("%d\n", sum);
}
