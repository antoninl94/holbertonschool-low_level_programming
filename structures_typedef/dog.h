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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} d;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
