#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 *_printf- Custum function that emulates the funtion printf
 *@format: String specifying the print layout
 *Return: number of characters printed or -1 if error
 */

int _printf(const char *format, ...)
{
	int counter = 0;
	char data_type;
	va_list arguments;

	va_start(arguments, format);

	if (format == NULL || arguments == NULL)
	{
		return (-1);
	}

	for (; format[counter] != '\0'; counter++)
	{
		if (format[counter] == '%')
		{
			data_type = (format[counter + 1]);
			if (data_type == 'c')
				print_char(va_arg(arguments, int));
			else if (data_type == 's')
				print_string(va_arg(arguments, char *));
			else if (data_type == 'i' || data_type == 'd')
				print_int(va_arg(arguments, int));
			else if (data_type == '%')
				_putchar('%');
			else
			{
				_putchar('%');
				_putchar(format[counter + 1]);
			}
			counter++;
		}
		else
		{
			_putchar(format[counter]);
		}
	}

	va_end(arguments);
	return (counter + 2);
}
