#include "main.h"
/**
 * _strlen - string lenght
 * @s: params
 * Returns: int
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
