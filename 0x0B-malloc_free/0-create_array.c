#include "main.h"
#include <stdlib.h>

/**
 *create_array - function that creates an array of chars
 *and initializes it with a specific char
 *@size: size of amount of memory to allocate in bytes
 *@c: char to initialize with the array
 *Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array./
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
