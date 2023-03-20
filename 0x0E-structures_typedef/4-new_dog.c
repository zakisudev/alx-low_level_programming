#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new struct dog
 * @name: 1st member of struct dog
 * @age: 2nd member of struct dog
 * @owner: 3rd member of struct dog
 *
 * Return: the new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}

/**
 * _strlen - calculates the length of a string
 * @str: the string used in the calculation
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _strcpy - copies a string
 *
 * Description: copies string pointed to by src, including null terminator,
 * to the buffer pointed to by dest
 * @src: pointer pointing to original string
 * @dest: pointer that copies string onto buffer
 *
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; *(src + index) != '\0'; index++)
		*(dest + index) = *(src + index);
	*(dest + index) = '\0';

	return (dest);
}
