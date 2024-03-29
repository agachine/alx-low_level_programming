#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as a parameter on each element of an array
 * @array: name to print
 * @size: size of the array
 *@action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int j;
if (array && action)
{
for (j = 0; j < size; j++)
action(array[j]);
}
}
