#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*new_dog - function to create new struct dog
*@name:element of the structt
*@age: element of the structt
*@owner: element of the struct
*
*Return: ptr to the  type dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(p));
	if (p == NULL)
	{
		return (NULL);
	}
	if (name == NULL)
	{
		free(name);
		free(p);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(owner);
		free(p);
		return (NULL);
	}
	p->name = strcpy(newdog->name, name);
	p->age = age;
	p->owner = strcpy(newdog->owner, owner);
	return (p);
}
