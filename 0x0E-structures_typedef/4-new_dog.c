#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function creates a new dog
 *@name: passed as arguments to function
 *@age: member passed as argument
 *@owner: passed as a string to function
 * Return: pointer to new dog or NULL if function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	/* *p researches memory to struct*/
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}

	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}

	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
