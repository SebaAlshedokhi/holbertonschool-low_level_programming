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
	int i;
	int flength = 1;

	for (i = 0 ; src[i] != '\0'; i++)
	flength++;

	for (i = 0; i <= flength; i++)
	dest[i] = src[i];

	return (dest);
}
