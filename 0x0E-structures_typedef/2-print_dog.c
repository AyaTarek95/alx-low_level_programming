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
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
