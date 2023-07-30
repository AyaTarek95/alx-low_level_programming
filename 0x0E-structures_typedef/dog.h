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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *scr);
int _strlen(char *s);

#endif
