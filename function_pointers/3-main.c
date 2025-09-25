/**
 * main - program
 * @argc: number of argv
 * @argv: string
 * Description: a program that performs simple operations.
 * Return: Always 0
 */
#include<stdio.h>
#include"3-calc.h"
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int a, b;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && !b)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_func(a ,b));
	return (0);
}
