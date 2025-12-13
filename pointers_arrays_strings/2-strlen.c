#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	/* Initialize length to 0 */
	int length = 0;

	/* Traverse the string until the null terminator */
	while (*s != '\0')
	{
		length++;  /* Increment the length for each character */
		s++;       /* Move to the next character */
	}

	return (length);  /* Return the length of the string */
}
