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
int temp;
int i = 0;
n = n - 1;
while (i < n)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
i++;
n--;
}
}
