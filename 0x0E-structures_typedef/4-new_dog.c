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
dog_t *my_dog;
mydog = malloc(sizeof(dog_t));
if (mydog == NULL)
return (NULL);
my_dog->name = strdup(name);
if (!my_dog->name)
{
free(mydog);
return (NULL);
}
my_dog->age= strdup(age);
my_dog->owner= strdup(owner);  
if (!my_dog->owner)
{
free(my_dog->name);
free(mydog);
return (NULL);
}
return (my_dog);
}
