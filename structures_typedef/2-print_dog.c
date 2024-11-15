#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print a struct dog
 * @d: name of the new dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: Nil\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Age: Nil");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: Nil\n");
	else
		printf("Owner: %s\n", d->owner);
}
