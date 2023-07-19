#include "main.h"

/**
 * _islower - check if char is lowercase
 *
 * Return: 1 if lowercase, otherwise 0.
 */

int _islower(int i)
{
	if (int i >= 'a' && int i <= 'z')
		return (1);
	else
		return (0);
}
