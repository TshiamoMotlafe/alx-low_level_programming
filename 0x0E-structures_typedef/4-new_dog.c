#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 * 
 * Return: Pointer to the newly created dog, or NULL if allocation fails.
 *
 * Description: This function creates a new dog and stores copies of the provided
 * name and owner strings. The new dog's age is set to the given age.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d = malloc(sizeof(dog_t));
	if (!new_d)
	return (NULL);

	new_d->name = strdup(name);
	if (!new_d->name)
	{
	free(new_d);
	return (NULL);
	}

	new_d->age = age;

	new_d->owner = strdup(owner);
	if (!new_d->owner)
	{
	free(new_d->name);
	free(new_d);
	return (NULL);	
	}
	return (new_d);
}
