#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - creates an array of integers.
*@min: mminimum number in range of arrays
*@max: maximum number in range of arrays
* Return: ptr.
*/
int *array_range(int min, int max)
{
int *ptr;
int a;
int i;
if (min > max)
{
return (NULL);
}
a = 0;
while (a < max-min)
{
a++;
}
a = a + 1;
ptr = malloc(sizeof(int) * a);
if (ptr == NULL)
{
return (NULL);
}
else
{
i = min;
 while (i < a)
{
ptr[i] = min++;
i++;
}
return (ptr);
}
return (0);
}
