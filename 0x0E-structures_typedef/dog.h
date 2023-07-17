#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - a struct
 * @name: 1st
 * @age: 2nd
 * @owner: 3rd
 *
 * Description: a dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
