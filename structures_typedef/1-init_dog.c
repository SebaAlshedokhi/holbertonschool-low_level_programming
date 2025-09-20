#include"dog.h"
/**
 * init_dog - initialize a variable
 * @d: structure
 * @name: pointer
 * @age: number
 * @owner: pointer
 * Description: a function that initialize a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
