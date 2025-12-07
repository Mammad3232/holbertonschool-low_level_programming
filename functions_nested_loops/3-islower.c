#include "main.h"

/**
 * _islower - kiçik hərf olub-olmadığını yoxlayır
 * @c: yoxlanacaq simvol (ASCII dəyəri)
 *
 * Return: Əgər c kiçik hərfdirsə 1, deyilsə 0 qaytarır
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

