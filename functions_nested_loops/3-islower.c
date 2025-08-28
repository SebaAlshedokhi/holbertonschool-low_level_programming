/**
* _islower - a function that checks for lowercase characte
* @c : int to checked
* Description:  a function that checks for lowercase character,
* print 1 if c is lowercase and 0 otherwise.
* Return: 1 if c is lowercase
* Return: 0 otherwise
*/

#include"main.h"
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
