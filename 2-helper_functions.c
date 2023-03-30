#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * put_count - calls _putchar and increments counter
 * @c: a character
 *
 * Return: 1
 */
int put_count(char c)
{
	_putchar(c);
	return (1);
}

/**
 * _strlen - length of a string
 * @s: takes parameter pointer to a char
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter = counter + 1;
	}
	return (counter);
}

/**
 * _strcmp  - compares two strings
 * @s1: destination string
 * @s2: source string
 *
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1 = s1 + 1;
		s2 = s2 + 1;
	}
	return (0);
}

int print_percent(__attribute__((unused))va_list ap)
{
	_putchar('%');
	return (1);
}

/**
 * get_func - pointer to a function that will extract the corralating function
 *  from a struct
 * @s: string of the format specifier eg. "%c",or "%s"
 *
 * Return: pointer to function or NULL if error
 */
int (*get_func(char s))(va_list)
{
	spec_t fspecs[] = {
		{'c', print_char},
		{'s', print_str},
		{'i', print_int},
		{'d', print_decimal},
		{'%', print_percent},
		{'\0', NULL}
	};

	int i;

	i = 0;
	while (fspecs[i].f != NULL)
	{
		if (fspecs[i].specifier == s)
		{
			return (fspecs[i].f);
		}
		i = i + 1;
	}
	return (NULL);
}
