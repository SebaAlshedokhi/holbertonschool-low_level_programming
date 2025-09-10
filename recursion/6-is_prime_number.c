int prime_helper(int n, int divisor);

/**
* is_prime_number - tests if the number is prime.
* @n: number
* Description: a function that tests if the number is prime.
* Return: 1 if the input integer is a prime number, otherwise return 0
*/

#include"main.h"
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, 2));
}

/**
* prime_helper - helper function.
* @n: number
* @divisor: number
* Description: a function that help prime.
* Return: result.
*/

int prime_helper(int n, int divisor)
{
	if (divisor > n / 2)
		return (1);
	if (n % divisor == 0)
		return (0);
	return prime_helper(n, divisor + 1);
}
