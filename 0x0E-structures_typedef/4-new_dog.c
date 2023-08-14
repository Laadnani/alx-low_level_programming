#include <stdlib.h>
#include "dog.h"

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
	while (*name != '\0')
	{
		dog->name = name;
		dog->name++;
		name++;
	}
	while (*owner != '\0')
	{
		dog->owner = owner;
		dog->owner++;
		owner++;
	}
	dog->age = age;
	return (dog);
}
