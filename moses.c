#include "main.h"
/**
 * moses - our function to print a character
 * @chr: our character input parameter
 * Return: return always 1
 */
int moses(char chr)
{
	return (write(1, &chr, 1));
}
