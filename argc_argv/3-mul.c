/**
* main - multiplies two numbers
* Description: a program that multiplies two numbers.
* @argc: count
* @argv: vector
* Return: number
*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	return (0);
}
