#include "main.h"
/**
 * _isupper - checks if uppercase
 * @c: character to check
 *
 * Return: gives 1 or 0
 */
int _isupper(int i)
{
	if (i >= 'A' && i <= 'Z')
	{
		return (1);
	}
	return (0);
}
