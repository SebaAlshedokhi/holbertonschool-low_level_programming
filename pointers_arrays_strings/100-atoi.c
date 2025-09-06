/**
* _strcpy - convert a string to an integer.
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

	while (*s)
	{
		if (*s == '-' && !num_started)
			sign *= -1;
		else if (*s == '+' && num_started)
			break;
		else if (*s >= '0' && *s <= '9')
		{
			num_started = 1;
			if (sign == 1)
			{
				if (result > (2147483647 - (*s - '0')) / 10)
				return 2147483647;
			}
			else
			{
				if (result > (2147483648U - (*s - '0')) / 10)
				return -2147483648;
			}
			result = result * 10 + (*s - '0');
		}
		else if (num_started)
		break;
		s++;
	}
	return (sign * result);
}

