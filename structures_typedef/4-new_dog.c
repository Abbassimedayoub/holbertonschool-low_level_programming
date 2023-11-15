#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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
