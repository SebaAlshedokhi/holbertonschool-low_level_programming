/**
* main - Fizz-Buzz test
*
* Description: prints the numbers from 1 to 100, Fizz and Buzz.
* Return: Always 0
*/

#include<stdio.h>
int main(void)
{
	int i;
	printf("1");
	for (i = 2; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			if ((i % 3) == 0)
			{
				printf(" Fizz");
			}
			else
			{
				if ((i % 5) == 0)
				{
					printf(" Buzz");
				}
				else
				{
					printf(" %d",i);
				}
			}
		}
	}
printf("\n");
return (0);
}
