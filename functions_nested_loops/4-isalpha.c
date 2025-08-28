/**
* _isalpha - a function that checks for alphabetic characte
* @c : int to checked
* Description:  a function that checks for alpha character,
* print 1 if c is letter and 0 otherwise.
* Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
*/

#include"main.h"
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
