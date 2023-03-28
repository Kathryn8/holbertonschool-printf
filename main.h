#ifndef __MAIN_H__
#define __MAIN_H__

/* List of prototypes and their respective declaration files */

typedef struct format_specs
{
	char *specifier; //eg "%s" "%c" "%i" "%d'.
	void (*f)(va_list)
} spec_t;

/* 1-helper_functions.c */
int _putchar(char c);
void print_char(va_list ap);
void print_str(va_list ap);
void print_int(va_list ap);
void print_decimal(va_list ap);
/* 2-helper_functions.c */
int _strlen(char *s);
void (*get_func(char *s))(va_list);
/* 3-helper_functions.c */
/* 4-helper_functions.c */

#endif /* __MAIN_H__ */
