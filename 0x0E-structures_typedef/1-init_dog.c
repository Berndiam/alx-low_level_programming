#include <stdlib.h>
#include "dog.h"

/**
* init_dog - This initializes the var of type struct dog
* @d: Displays a pointer to struct dog to initialize
* @name: Shows the name to initialize
* @age: The age to initialize
* @owner: The owner to initialize
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
