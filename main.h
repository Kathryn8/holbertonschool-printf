#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdarg.h>
/* Declaration of typedef structs: */

/**
 * struct char_string - connects a char to a string
 *
 * @c: a character, c,s,i or d
 * @str: a string
 */
typedef struct char_string
{
	char c;
	char *str;
} csid_t;

/**
 * struct format_specs - format specifiers and connected function
 *
 * @specifier: such as those found in format string
 * @f: The function associated
 */
typedef struct format_specs
{
	char *specifier;
	int (*f)(va_list);
} spec_t;

/* List of prototypes and their respective declaration files */
int _printf(const char *format, ...);

/* 1-helper_functions.c */
int _putchar(char c);
int print_char(va_list ap);
int print_str(va_list ap);
int print_int(va_list ap);
int print_decimal(va_list ap);
/* 2-helper_functions.c */
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
int (*get_func(char *s))(va_list);
/* 3-helper_functions.c */
/* 4-helper_functions.c */

#endif /* __MAIN_H__ */
