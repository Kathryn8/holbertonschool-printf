#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("MY  :Let's try: %s\n", "hello");
    len2 = printf("Real:Let's try: %s\n", "hello");
    _printf("MY  :Length:[%d, %i]\n", len, len);
    printf("Real:Length:[%d, %i]\n", len2, len2);
    // next test:
    len = _printf("MY  :Let's try to printf a simple sentence.\n");
    len2 = printf("Real:Let's try to printf a simple sentence.\n");
/*    ui = (unsigned int)INT_MAX + 1024;
      addr = (void *)0x7ffe637541f0; */
    _printf("MY  :Length:[%d, %i]\n", len, len);
    printf("Real:Length:[%d, %i]\n", len2, len2);
    _printf("MY  :Negative:[%d]\n", -762534);
    printf("Real:Negative:[%d]\n", -762534);
/*    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);*/
    _printf("my printf  : Character:[%c]\n", 'H');
    printf("real printf: Character:[%c]\n", 'H');
    _printf("my printf  : String:[%s]\n", "I am a string !");
    printf("real printf: String:[%s]\n", "I am a string !");
    _printf("MY  : an int: %i\n", -567098234);
    printf("Real: an int: %i\n", -567098234);
    _printf("My  :d: %d\n", -6);
    printf("Real:d: %d\n", -6);
/*    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");*/
    return (0);
}
