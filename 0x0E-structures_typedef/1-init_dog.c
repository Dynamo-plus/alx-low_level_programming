#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initialize the properties of dog
 * @d: container of the properties of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: Return the values of dog;
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
