#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"
/**
 * op_add - calculates the sum
 * @a: first integer
 * @b: second integer
 * Description: a function to calculates the sum
 * Return: sum
 */
int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
 * op_sub - calculates the difference
 * @a: first integer
 * @b: second integer
 * Description: a function to calculates the difference 
 * Return: difference 
 */
int op_sub(int a, int b)
{
	int result;
	result = a - b;
	return (result);
}

/**
 * op_mul - calculates the product
 * @a: first integer
 * @b: second integer
 * Description: a function to calculates the product
 * Return: product
 */
int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

/**
 * op_div - calculates the division
 * @a: first integer
 * @b: second integer
 * Description: a function to calculates the division
 * Return: division
 */
int op_div(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}	
	result = a / b;
	return (result);
}

/**
 * op_mod - calculates the remainder of the division
 * @a: first integer
 * @b: second integer
 * Description: a function to calculates the remainder of the division
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	int result;

	if (b == 0)
	{			{
		printf("Error\n");
		exit(100);
	}
	result = a % b;
	return (result);
}
