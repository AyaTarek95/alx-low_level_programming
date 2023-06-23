#include <stdio.h>
/**
 * main - Has to start here
 * Return: Returns 0 when successful
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (!(i % 15))
	printf("FizzBuzz");
	else if (!(i % 5))
	printf("Buzz");
	else if (!(i % 3))
	printf("Fizz");
	else
	printf("%d", i);
	if (i != 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
