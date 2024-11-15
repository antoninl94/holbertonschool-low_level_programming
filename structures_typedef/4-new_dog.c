#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - New dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: The new dog informations
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
	{
		free(doggo);
		return (NULL);
	}
	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;
	return (doggo);
}
