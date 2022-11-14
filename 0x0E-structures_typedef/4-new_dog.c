#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: the string to be measured
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string to src, including the terminating null byte
 * @dest: the buffer storing the string copy
 * @src: the source string
 *
 * Return: the pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: The new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *jackie;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	jackie = malloc(sizeof(dog_t));
	if (jackie == NULL)
		return (NULL);

	jackie->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (jackie->name == NULL)
	{
		free(jackie);
		return (NULL);
	}

	jackie->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (jackie->owner == NULL)
	{
		free(jackie->name);
		free(jackie);
		return (NULL);
	}

	jackie->name = _strcopy(jackie->name, name);
	jackie->age = age;
	jackie->owner = _strcopy(jackie->owner, owner);

	return (jackie);
}
