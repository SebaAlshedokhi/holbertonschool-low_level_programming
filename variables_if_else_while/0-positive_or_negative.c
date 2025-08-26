/**
* main - positive or negative.
* Description : This program will assign a random number to the variable n to print whether the number positive or negative. 
Return: Always return 0 (Success)
*/
#include<stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d is posative", n);
	}
	else
	{
		if (n<0)
		{
			printf("%d is posative", n);
		}
		else
		{
			printf("%d is zero", n);
		}
	}
	return (0);
}
