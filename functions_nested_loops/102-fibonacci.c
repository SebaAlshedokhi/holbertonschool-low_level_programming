/**
* main -  Fibonacci numbers.
* Description:   prints the first 50 Fibonacci numbers.
*
* Return: Always 0
*/

#include<stdio.h>
int main(void)
{
int i, third;
int first = 1;
int second = 2;

printf("%d, %d", first, second);
for (i = 3; i <= 50; i++)
{
	third = first + second;
	printf(", %d", third);
	first = second;
	second = third;
}
printf("\n");
