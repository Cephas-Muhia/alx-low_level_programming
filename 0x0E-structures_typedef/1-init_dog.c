#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialized dog stuct.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
