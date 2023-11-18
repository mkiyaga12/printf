#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed charas.
 */

int _printf(const char *format, ...)
{
	int i = 0, printed_charas = 0;
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
	for (i = 0; format && format[i] != '\0'; i++)
		return (0);
	}

	/* write(1, &format[i], 1);*/
	return (printed_charas++);
}
