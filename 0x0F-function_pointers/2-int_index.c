#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 *
 * @array: array to iterate over
 * @size: size of the array
 * @cmp: pointer to function used
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int elem;
if (array && cmp)
{
for (elem = 0; elem < size; elem++)
{
if (cmp(array[elem]) != 0)
return elem;
else 
return (-1); 
}
}
return (-1);
}
