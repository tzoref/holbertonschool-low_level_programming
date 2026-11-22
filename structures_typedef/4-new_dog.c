#include "dog.h"
#include <stdlib.h>

/**
 * copy_string - Allocates memory and copies a string
 * @str: String to copy
 *
 * Return: Pointer to the copy, or NULL on failure
 */
char *copy_string(char *str)
{
	char *copy;
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;

	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';

	return (copy);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog's owner
 *
 * Return: Pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->age = age;
	dog->name = copy_string(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = copy_string(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	return (dog);
}
