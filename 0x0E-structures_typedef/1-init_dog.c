#include "dog.h"

/**
 * init_dog - initializes a variable 
 * of type of dog struct
 * @d: struct dog -> struct
 * @name: name of the dog -> string
 * @age: age of the dog -> number
 * @owner: owner of the dog -> char
 * Return: always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
