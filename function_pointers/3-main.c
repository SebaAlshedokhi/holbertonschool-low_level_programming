/**
 * main - program
 * @argc: count
 * @argv: string
 * Description: a program that performs simple operations.
 * Return: Always 0
 */
#include<stdio.h>
#include"3-calc.h"
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int a, b, result;
	char *operator;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	operator = argv[2];
	b = atoi(argv[3]);
	func = get_op_func(operator);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' || *operator == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(a, b);
	printf("%d\n", result);
}

