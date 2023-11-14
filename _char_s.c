#include "main.h"
/**
 * put_s - our function to print char s
 * @chr: string parsmeter
 * Return: return always number of bytes
 */
int put_s(char *chr)
{
	int s = 0;

	if (chr)
	{
	for (chr = 0; chr[s] != '\0'; s++)
	{
		moses(chr[s]);
	}
	}
	return (s);
}
