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
	csid_t match[] = {
		{'c', "%c"},
		{'s', "%s"},
		{'i', "%i"},
		{'d', "%d"},
		{'\0', NULL}
	};

	va_start(ap, format);
	i = 0;
	while (format[i] != '\0') // loop over format string
	{
		j = 0;
		while (match[j].c != '\0') // loop over the match struct
		{
			if ((format[i] == '%') && (format[i + 1] == match[j].c))
			{
				get_func(match[j].str)(ap); // prints variable
				i = i + 2;
				break;
			}
			else if ((format[i] == '%') && (format[i + 1] != match[j].c))
			{
				_putchar('%');
				i = i + 1;
				break;
			}
			else
			j = j + 1;
		}
		_putchar(format[i]);
		i = i + 1;
	}
	va_end(ap);
}
