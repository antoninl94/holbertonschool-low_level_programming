#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - return the length of a string
 * @s: the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - copy the string pointed to by src in dest
 * @src: the one to be copied
 * @dest: the destination of the copy
 * Return: the result of the copy
 */
char *_strcpy(char *dest, char *src)
{
	int end;

	end = 0;

	while (src[end] != '\0')
	{
		dest[end] = src[end];
		end++;
	}
	dest[end] = '\0';
	return (dest);
}

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
		return (NULL);
	}

	doggo->name = malloc((_strlen(name) + 1) * sizeof(name));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	_strcpy(doggo->name, name);

	doggo->age = age;

	doggo->owner = malloc((_strlen(owner) + 1) * sizeof(owner));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	_strcpy(doggo->owner, owner);
	return (doggo);
}
