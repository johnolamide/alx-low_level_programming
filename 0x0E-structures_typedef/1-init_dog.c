#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct dog variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
