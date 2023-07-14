#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - descripe
 * @s1: 1st
 * @s2: 2nd
 * @n: 3rd
 * Return: always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *a;
	int i, j, s1_len, s2_len;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)

	a = malloc(s1_len + n + 1);
	if (a == NULL)
	return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	a[i] = s1[i];

	for (j = 0; j < n; j++)
	{a[i] = s2[j];
	i++;
}
	a[i] = '\0';

	return (a);
}
