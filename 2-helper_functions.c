#include "main.h"

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
void (*get_func(char *s))(va_list);
{
	spec_t fspecs[] = {
		{"%c", print_char},
		{"%s", print_str},
		{"%i", print_int},
		{"%d", print_decimal},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while(fspecs[i].specifier != NULL)
	{
		if ()
		i = i + 1;
	}