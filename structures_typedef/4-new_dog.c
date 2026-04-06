#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and stores copies of name and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_len = 0, owner_len = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	/* 1. Calculate the lengths of the strings */
	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	/* 2. Allocate memory for the struct itself (on the Heap) */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* 3. Allocate memory for the copy of 'name' (+1 for the \0 character) */
	d->name = malloc(sizeof(char) * (name_len + 1));
	if (d->name == NULL)
	{
		free(d); /* Clean up the struct before failing! */
		return (NULL);
	}

	/* 4. Allocate memory for the copy of 'owner' */
	d->owner = malloc(sizeof(char) * (owner_len + 1));
	if (d->owner == NULL)
	{
		free(d->name); /* Clean up the name we just allocated! */
		free(d);	   /* Clean up the struct! */
		return (NULL);
	}

	/* 5. Deep copy the characters over to the new memory spaces */
	for (i = 0; i <= name_len; i++)
		d->name[i] = name[i];

	for (i = 0; i <= owner_len; i++)
		d->owner[i] = owner[i];

	/* 6. Assign the primitive type (no malloc needed for floats) */
	d->age = age;

	return (d);
}
