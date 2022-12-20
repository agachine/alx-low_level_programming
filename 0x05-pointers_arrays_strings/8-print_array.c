#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elemets of an array
 * @a: pointer to the array
 * @n: number of elements in array
 */
void print_array(int *a, int n)
{
int j;
for (j = 0; j < n; i++)
{
printf("%d", a[j]);
if (j < n - 1)
{
printf(", ");
}
}
putchar('\n');
}
