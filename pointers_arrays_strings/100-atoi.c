/**
* _atoi - convert a string to an integer.
* @s: pointer
* Description: a function that convert a string to an integer.
* Return: integer number.
*/

#include "main.h"
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int num_started = 0;
	int digit;

	while (*s)
	{
		if (*s == '-' && !num_started)
			sign *= -1;
		else if (*s == '+' && num_started)
			break;
		else if (*s >= '0' && *s <= '9')
		{
			num_started = 1;
			digit = *s - '0';
			if (sign == 1 && result > (2147483647 - digit) / 10)
				return (2147483647);
			if (sign == -1 && result > (2147483647 - digit + 1) / 10)
				return (-2147483648);
			result = result * 10 + digit;
		}
		else if (num_started)
			break;
		s++;
	}
	return sign * result;
}
