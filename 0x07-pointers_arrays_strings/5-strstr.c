#include "main.h"

/**
 * _strstr - locates a substr
 * @haystack: the str to be searched
 * @needle: the substr to be located
 * Return: a pointer to the beginning of the located substr
 * if the substr is not located - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}


	return ('\0');
}
