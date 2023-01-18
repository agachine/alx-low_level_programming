#include <stdio.h>
#include <stddef.h>
#include "dog.h"
/**
*print_dog - prints dog details
*@d: address locations for the struct
*Return: nothing
*/
void print_dog(struct dog *d)
{ 
if (d != NULL)
{
if (d->name == NULL)
{
printf("Name: (nil)");
}
else 
{ 
printf("Name:%s", d->name);   
}
printf("Age:%f", d->age);      
if ( d->owner == NULL)
{
printf("Owner: (nil)");
}
else 
{ 
printf("Owner:%s", d->owner);
}
}
}
