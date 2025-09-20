#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog data
 * @name: Dog name
 * @age: Dog age
 * @owner: Owner name
 * Description: a structure to recognize the dog data
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
