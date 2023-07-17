#include "dog.h"
#include <stdio.h>
/**
 * print_dog - description
 * @d:1st
 * Return: always 0
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("%s\n", d->name ? d->name : "(nil)");
		printf("%f\n", d->age);
		printf("%s\n", a->owner ? d->owner : "(nil)");
	}
}
