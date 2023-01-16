#include <stdlib.h>
#include "dog.h"

/**
 * _copy  -   function that copy passed argument
 * @src:      Data to make copy of
 * Return:    Pointer
 */

char *_copy(char *src)
{
	char *ptr;
	int i, j;

	if (src == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
		;

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		ptr[j] = src[j];
	}

	ptr[j] = '\0';
	return (ptr);
}

/**
 * new_dog - function that Create a new dog variable
 * @name:   Name of the dog
 * @age:    Age of the dog
 * @owner:  Owner of the dog
 * Return:  Pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).name = new_name;

	(*dog).age = age;

	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	(*dog).owner = new_owner;

	return (dog);
}
