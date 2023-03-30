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
	int j;
	int ret_value;
	csid_t match[] = {
		{'c', "%c"},
		{'s', "%s"},
		{'i', "%i"},
		{'d', "%d"},
		{'\0', NULL}
	};

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
			j = 0;
			while (match[j].c != '\0')
			{
				if (format[i + 1] == match[j].c)
				{
					ret_value = ret_value + get_func(match[j].str)(ap);
					i = i + 1;
					break;
				}
				else if (format[i + 1] == '%')
				{
					_putchar('%');
					ret_value = ret_value + 1;
					i = i + 1;
					break;
				}
				else
				{
					j = j + 1;
				}
			}
		}
		i = i + 1;
	}
	va_end(ap);
	return (ret_value);
}
