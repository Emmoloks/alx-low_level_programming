#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes struct dog
 * @d: pointer
 * @name: dogs name
 * @owner: name owner
 * @age: dogs age
 * Return: pointer
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
