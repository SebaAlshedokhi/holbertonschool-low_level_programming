/**
* main - prints the number of arguments
* Description: a program that prints the number of arguments passed into it.
* @argc: count
* @argv: vector
* Return: Always 0
*/

#include<stdio.h>
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
