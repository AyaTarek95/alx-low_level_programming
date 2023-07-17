#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - length
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i;
	
	i = 0;
	
	while (s[i] != '\0')
	i++;

	return (i);
}
/**
 * _strcpy - copy
 * @dest: where to cpy
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;
	
	len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[len];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - descrip
 * @name: 1
 * @age: 2
 * @owner: 3
 * Return: always 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);	

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
			return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->owner);
		return (NULL);
	}
		_strcpy(dog->name, name);
		_strcpy(dog->owner, owner);
		dog->age = age;
		
		return (dog);
}
