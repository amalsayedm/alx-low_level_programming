#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes var type dog
 * @d: The dog object
 * @name: The name
 * @age: The age
 * @owner: The owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
