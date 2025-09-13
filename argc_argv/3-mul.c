/**
 * main - multiplies two numbers
 * Description: a program that multiplies two numbers.
 * Return: number
 */

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3)
		printf("Error\n");
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n",mult);
	return (0);
}
