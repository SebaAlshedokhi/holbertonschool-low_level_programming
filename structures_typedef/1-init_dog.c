/**
 * init_god -  initialize a variable 
 * @struct dog: structure
 * @name: pointer
 * @age: number
 * @owner: pointer
 * Description: a function that initialize a variable of type struct dog
 */
#include<stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
