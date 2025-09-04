/**
* _strcpy - copies the string to the buffe.
* @dest: pointer
* @src: pointer
* Description: a function that copies the string
* pointed to by src, including the terminating null byte (\0),
* to the buffer pointed to by dest.
* Return: the pointer to dest.
*/

#include"main.h"
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((dest[i] = src[i]) != '\0')
	{
		i++;
	}
	return (dest);
}
