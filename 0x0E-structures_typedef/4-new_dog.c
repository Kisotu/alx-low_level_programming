#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *create_and_initialize_dog(char *name, float age, char *owner)
{
	dog_t *doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		return (NULL);
	}

	doge->name = strdup(name);
	doge->age = age;
	doge->owner = strdup(owner);

	return (doge);
}

int calculate_length(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_length = calculate_length(name);
	int owner_length = calculate_length(owner);

	dog_t *doge = create_and_initialize_dog(name, age, owner);
	if (doge == NULL)
	{
		return (NULL);
	}

	doge->name = realloc(doge->name, (name_length + 1) * sizeof(char));
	if (doge->name == NULL)
	{
		free(doge->owner);
		free(doge);
		return (NULL);
	}

	doge->owner = realloc(doge->owner, (owner_length + 1) * sizeof(char));
	if (doge->owner == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}

	return (doge);
}

