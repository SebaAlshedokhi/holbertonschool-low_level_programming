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
	int digit = 0;

	while (*s && (*s != '+' && *s != '-' && (*s < '0' || *s > '9')))
		s++;

	if (*s == '-')
		sign *= -1;
	if (*s == '+' || *s == '-') 
		s++;

	while ((*s >= '0') && (*s <= '9'))
	{
		digit = *s - '0';
		result = (result * 10) + digit;
		s++;
	}
	return (sign * result);
}
