#include "dog.h"

/**
 * init_dog - descripe struct
 * @d: 1st
 * @name: 2nd
 * @age: 3rd
 * @owner: 4th
 * Return: always 0
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
