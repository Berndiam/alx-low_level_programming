#include <stdlib.h>
#include "dog.h"

/**
* free_dog - This releases the memory allocated for a struct dog
* @d: Displays the struct dog to free.
*/

void free_dog(dog_t *d);
{
	if (d == NULL)
		return;
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
