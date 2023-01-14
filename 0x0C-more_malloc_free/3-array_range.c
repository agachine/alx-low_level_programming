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
int len;
int i;
if (min > max)
{
return (NULL);
}
len = min;
while (len <= max )
{
len++;
}
ptr = malloc(sizeof(int) * len);
if (ptr == NULL)
{
return (NULL);
}
else
{
i = 0;
while (min <= max)
{
ptr[i] = min;
min++; 
i++;
}
return (ptr);
}
return (0);
}
