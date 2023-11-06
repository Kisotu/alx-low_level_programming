#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - inita variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name of dog to initialize
 * @age: age of dog to init
 * @owner: owner of dog to init
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
