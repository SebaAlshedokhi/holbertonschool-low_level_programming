/**
 *  main - program
 *  Description: a program that performs simple operations.
 *  Return: Alwayes 0
 */
#include<stdio.h>
#include"3-calc.h"
#include<stdlib.h>
int main (void)
{
	int a, b;
	char operator;

	if (argc != 5)
	{
		printf("Error");
		exit(98);
	}
	a = atoi(argv[1]);
	operator = argv[2];
	b = atoi(argv[3]);
	
