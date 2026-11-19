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

	(void)name;
	(void)age;
	(void)owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	free(dog);
	return (NULL);
}
