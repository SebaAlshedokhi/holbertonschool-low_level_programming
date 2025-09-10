int _prime_helper(int n, int divisor, int limit);
int _sqrt_recursion(int n);

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
	return (prime_helper(int n, 2, _sqrt_recursion(n)));
}

/**
* prime_helper - helper function.
* @n: number
* @divisor: number
* @limit: number
* Description: a function that help prime.
* Return: result.
*/

int prime_helper(int n, int divisor, int limit)
{
	if (divisor > limit)
		return (1);
	if (n % divisor == 0)
		return (0);
	return prime_helper(n, divisor + 1, limit);
}
