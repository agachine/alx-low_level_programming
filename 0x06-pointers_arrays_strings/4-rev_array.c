#include "main.h"
#include <stdio.h>
/**
* _strcat - concatenates two strings
* @a: an array of integers
* @n: the number of elements to swap
* Return: Always 0.
*/
void reverse_array(int *a, int n)
{
int temp[n];
int i = 0;
while (i < n)
{
temp[n - 1 - i] = a[i];
i++;
}
while (i < n)
{
a[i] = temp [i]
}
}
