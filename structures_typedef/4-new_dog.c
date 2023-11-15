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
	dog_t *newdog;

        newdog = malloc(sizeof(dog_t));
        if (newdog == NULL)
        {
                free(newdog);
                return (NULL);
        }
        newdog->name = malloc(sizeof(char) * strlen(name) + 1);
        if (newdog->name == NULL)
        {
                free(newdog->name);
                 free(newdog);
                return (NULL);
        }
        newdog->owner = malloc(sizeof(char) * strlen(owner) + 1);
        if (newdog->owner == NULL)
        {
                free(newdog->owner);
                free(newdog->name);
                free(newdog);
                return (NULL);
        }
        newdog->name = strcpy(newdog->name, name);
        newdog->age = age;
        newdog->owner = strcpy(newdog->owner, owner);

        return (newdog);
}
