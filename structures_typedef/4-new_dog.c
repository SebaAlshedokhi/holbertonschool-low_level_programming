#include<stdlib.h>
#include"dog.h"
/**
 * _strlen - length
 * @str: string
 * Description: to find length
 * Return: length
 */
int _strlen(const char *str)
{
	int length = 0;
	while (*str++)
		length++;
	return (length);
}

/**
 * _strcopy - copy
 * @src: string
 * @dest: string
 * Description: copy a string
 * Return: copy
 */
char *_strcopy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

#include"dog.h"

/**
 *  *new_dog - function
 *  @name: pointer
 *  @age: number
 *  @owner: pointer
 *  Descriptopn: a function for dog
 *  Return: struct or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return(NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return(NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return(NULL);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);
	return (dog);
}
