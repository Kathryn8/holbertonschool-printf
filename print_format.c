/**
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i;
	int j;

	i = 0;
	j = 0;


	while (*format[i] != '\0')
	{
		_putchar(format[i]);

		if (format[i] = '%')
			   {
				   if(format[i + 1] == "%c" || format[i + 1] == "%s")
				   {
					   get_func(format[i])(ap);
				   }
			   }




		i = i + 1;
	}
	_putchar("N\n");
	exit(121);
}
