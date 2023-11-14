#include "main.h"
/**
 * _printf - this is our function to print a formatted string.
 * @format: format is our function paramater
 * Return: return alwayss number of bytes printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, str_c, c = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
	if (format[i] != '%')
	{
	moses(format[i]);
	}
	else if (format[i + 1] == 'c')
	{
	moses(va_arg(args, int));
	i++;
	}
	else if (format[i + 1] == 's')
	{
	str_c = put(va_arg(args, char *));
	i++;
	c += (str_c - 1);
	}
	else if (format[i + 1] == '%')
	{
	moses('%');
	}
	c += 1;
	}
	va_end(args);
	return (c);

}
