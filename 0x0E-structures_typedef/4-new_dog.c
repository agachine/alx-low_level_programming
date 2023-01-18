#include <stddef.h>
#include "dog.h"
#include<string.h>
char *_strdup(char *str);
/**
*new_dog - creates new dog details
*@name: dog's name
*@age: dog's age
*@owner: dog's owner
*Return: nothing
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *mydog;
mydog = malloc(sizeof(dog_t));
if (mydog == NULL)
return (NULL);
mydog->name = strdup(name);
if (!mydog->name)
{
free(mydog);
return (NULL);
}
mydog->age= strdup(age);
mydog->owner= strdup(owner);  
if (!mydog->owner)
{
free(mydog->name);
free(mydog);
return (NULL);
}
return (mydog);
}
