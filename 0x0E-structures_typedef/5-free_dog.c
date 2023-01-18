#include <stddef.h>
#include "dog.h"
#include <stdlib.h>
/**
*free_dog - free memory allocated to dog function
*@d: dog memory allocation
*Return: nothing
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->owner);
free(d->name);
free(d);
}
}
