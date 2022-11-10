#include "main.h"

/**
 * _realloc - to reallocate a memory block
 * @ptr: pointer
 * @old_size: size in bytes of the allocated space
 * @new_size: new size of the new block
 * Return: pointeir
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *realloc;
	unsigned int i;

	if (ptr != NULL)
	clone = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	realloc = malloc(new_size);
	if (realloc == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(realloc + i) = clone[i];
	}
	free(ptr);
	return (realloc);
}
