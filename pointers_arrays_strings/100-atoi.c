/**
* _atoi - convert a string to an integer.
* @s: pointer
* Description: a function that convert a string to an integer.
* Return: integer number.
*/

#include "main.h"
int _atoi(char *s)
{
	int sign=1,result=0;

	while (*s)
	{
		if (*s=='-')
			sign*=-1;
		else if (*s>='0'&&*s<='9')
			break;
	s++;
	}
	while (*s>='0'&&*s<='9')
	{
		result=result*10+(*s-'0');
		s++;
	}
return sign*result;
}
