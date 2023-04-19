#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_copy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);


/**
 * _strlen - gets the length of a string.
 * @str: The string
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _copy - Copies a string
 * @dest: returned string
 * @src: The source string.
 * Return: The pointer to dest.
 */

char *_copy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}


/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to the dog object
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = _copy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _copy(doggo->owner, owner);

	return (doggo);

}
