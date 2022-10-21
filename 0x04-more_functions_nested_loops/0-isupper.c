#include "main.h"

/**
 * _isupper - checks if a char is uppercase
 * @c: Variable text
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
