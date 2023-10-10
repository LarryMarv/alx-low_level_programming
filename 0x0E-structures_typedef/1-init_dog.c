#include "dog.h"

/**
 * init_dog -  initializes a variable of type struct dog
 *@d: is the initalization
 *@name: is the member of the struct
 *@age: is the second member of the struct
 *@owner: is the third member
 *
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
