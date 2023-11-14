#include "main.h"
/**
 * _strleng - Returns the number of characters in a string.
 * @str: the string to find the length of
 *
 * Return: Length of the string.
 */
unsigned int _strleng(char *str)
{
	unsigned int len = 0;

	while (str[len])
		len++;

	return (len);
}
