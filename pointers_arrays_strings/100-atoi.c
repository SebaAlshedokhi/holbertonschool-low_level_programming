/**
* _strcpy - convert a string to an integer.
* @s: pointer
* Description: a function that convert a string to an integer.
* Return: integer number.
*/

#include"main.h"
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		sign *= -1; 
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (result > (2147483647 - (*s - '0')) / 10)
			break;
		result = result * 10 + (*s - '0');
		s++;
	}
	return (sign * result);
}
