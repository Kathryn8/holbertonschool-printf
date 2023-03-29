#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
}

void print_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i = 0;
	printf("boo!");

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
	}
}

void print_int(va_list ap)
{
	int x = va_arg(ap, int);
	int z = 0;
	int i = 1000000000;

	while (i > 0)
	{
		if (i > x)
		{
			i = i / 10;
		}
		else
		{
			z = x - (x % i);
			x = x - z;
			z = z / i;
			i = i / 10;
			_putchar(z + '0');
		}
	}
	_putchar('\n');
}

void print_decimal(va_list ap)
{
	_putchar('D');
}
