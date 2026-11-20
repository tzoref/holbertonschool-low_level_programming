
#include "dog.h"
#include <stdlib.h>

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
	int len;
	int i;

	len = 0;
	while (name[len] != '\0')
	{
		len++;
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->age = age;
	dog->name = malloc((len + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		dog->name[i] = name[i];
		i++;
	}
	dog->name[i] = '\0';
	len = 0;
	while (owner[len] != '\0')
	{
		len++;
	}
	dog->owner = malloc((len + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		dog->owner[i] = owner[i];
		i++;
	}
	dog->owner[i] = '\0';
	return (dog);
}
