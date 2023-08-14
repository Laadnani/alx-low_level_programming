#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - mimicing strlen function
 * @src: source string to copy
 * @dest: destination of copied string
 * Return: copied string dest
 */

char *_strlen(char *src, char *dest)
{
	int i, j;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * *new_dog - create a new dog struct
 * @name: name to be copied
 * @age: age to be copied
 * @owner: owner name to be copied
 * Return: new copied dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nl, ol;
	dog_t *dog;

	for (nl = 0; name[nl] != '\0'; nl++)
	;
	for (ol = 0; owner[ol] != '\0'; ol++)
	;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * nl + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * ol + 1);
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strlen(name, dog->name);
	_strlen(owner, dog->owner);
	dog->age = age;
	return (dog);
}
