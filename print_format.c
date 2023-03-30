#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - a function that prints char, string, integer and decimal formats
 * @format: user input format string, may or may not contain format identifiers
 *
 * Return: void
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i;
	int ret_value;
	int (*p)(va_list);

	if (format == NULL)
		return (-1);
	ret_value = 0;
	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			ret_value = ret_value + 1;
			_putchar(format[i]);
		}
		else
		{
			p = get_func(format[i + 1]);
			if (p == NULL)
			{
				_putchar(format[i]);
				ret_value = ret_value + 1;
			}
			else
			{
				ret_value = ret_value + p(ap);
				i = i + 1;
			}
		}
		i = i + 1;
	}
	if (format[i - 1] == '%')
		return(-1);
	va_end(ap);
	return (ret_value);
}
