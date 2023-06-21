#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints time table
 * @n: max
 * Return: None
 */
void print_times_table(int n)
{
int i, j;
for (i = 0; i <= n; i++)
{
if (n > 15 || n < 0)
break;
for (j = 0; j <= n; j++)
{
if (j != 0)
{
printf(",");
if (i * j < 1000)
{
printf(" ");
if (i * j < 10)
printf("  ");
else if (i * j < 100)
printf(" ");
}
}
printf("%d", i * j);
}
printf("\n");
}
}
