#include <stdio.h>
#include <stddef.h>
#include "dog.h"
/**
*print_dog - prints dog details
*@d: address locations for the struct
*@name: dog's name
*@age: dog's age
*@owner: dog's owner
*Return: nothing
*/
void print_dog(struct dog *d)
{ 
if (d == NULL)
printf(NULL);
if (d->name == NULL)
printf("Name: (nil)");
if (d->age == NULL)
printf("Age: (nil)");       
if ( d->owner == NULL)
printf("Owner: (nil)");
else 
{ 
printf("Name:%s", d->name);
printf("Age:%f", d->age);
printf("Owner:%s", d->owner);
}
}
