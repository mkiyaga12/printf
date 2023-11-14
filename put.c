#include "main.h"
/**
 * put - our function to prints string
 * @chr: string parsmeter
 * Return: return always number of bytes
 */
int put(char *chr)
{
	int c = 0;

	if (chr)
	{
	for (chr = 0; chr[c] != '\0'; c++)
	{
	moses(chr[c]);
	}
	}
	return (c);
}
