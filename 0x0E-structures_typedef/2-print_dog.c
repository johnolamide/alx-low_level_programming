#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: struct dog variable
 */
void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		printf("");
	d.name ? printf("Name: %s", d.name) : printf("nil");
	d.age ? printf("Age: %f", d.age) : printf("nil");
	d.owner ? printf("Owner: %s", d.owner) : printf("nil");
}
