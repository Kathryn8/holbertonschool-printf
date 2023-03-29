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

/**
 * print_char - prints a char
 * @ap: user input
 *
 * Return: number of characters printed
 */
int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * print_str - prints a string
 * @ap: user input
 *
 * Return: number of characters printed
 */
int print_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
	}
	return (i);
}

/**
 * print_int - prints an integer
 * @ap: user input
 *
 * Return: number of characters printed
 */
int print_int(va_list ap)
{
	long int x = va_arg(ap, int);
	int z = 0;
	long int i = 10000000000;
	int k = 0;
	int count = 0;

	if (x == 0)
	{
		_putchar(x + '0');
		count = count + 1;
		return (count);
	}
	if (x < 0)
	{
		_putchar('-');
		x = x * (-1);
		count = count + 1;
	}
	while (i > 0)
	{
		if (i > x)
		{
			if (k == 1)
			{
				_putchar('0');
				count = count + 1;
			}
			i = i / 10;
		}
		else
		{
			z = x - (x % i);
			x = x - z;
			z = z / i;
			i = i / 10;
			k = 1;
			_putchar(z + '0');
			count = count + 1;
		}
	}
	return (count);
}

/**
 * print_decimal - prints a decimal
 * @ap: user input
 *
 * Return: number of characters printed
 */
int print_decimal(va_list ap)
{
	long int x = va_arg(ap, int);
	int z = 0;
	long int i = 10000000000;
	int k = 0;
	int count = 0;

	if (x == 0)
	{
		_putchar(x + '0');
		count = count + 1;
		return (count);
	}
	if (x < 0)
	{
		_putchar('-');
		x = x * (-1);
		count = count + 1;
	}
	while (i > 0)
	{
		if (i > x)
		{
			if (k == 1)
			{
				_putchar('0');
				count = count + 1;
			}
			i = i / 10;
		}
		else
		{
			z = x - (x % i);
			x = x - z;
			z = z / i;
			i = i / 10;
			k = 1;
			_putchar(z + '0');
			count = count + 1;
		}
	}
	return (count);
}
