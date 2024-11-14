#ifndef DOG_H
#define DOG_H

/**
 * struct dog - store dog information
 * @name: his name
 * @age: his age
 * @owner: his owner
 * Description: This is the informations about the dog,
 * containing his name, age and the name of the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
