/**
* main - adds positive numbers
* @argc: count
* @argv: vector
* Description: a program that adds positive numbers.
* Return: number
*/

#include<stdlib.h>
#include<stdio.h>
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		print("%d\n",0);
		return (0);
	}
	for (i = 1; i < argc ; i++)
		if (argv[i] < '0' && argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	return (0);
}
