#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	int counter = 0;
	char data_type;


	va_list arguments;
	
	va_start(arguments, format);
	
	if (format == NULL)
		return (-1);
	else
		for (; format[counter] != '\0'; counter++)
		{
			if (format[counter] == '%')
	
				data_type = (format[counter + 1]);	
			

					if (data_type == 'c') 

						print_char(va_arg(arguments, int));

					
					else if (data_type == 's')

						print_string(va_arg(arguments, char *));
					else if (data_type == 'i')
						print_int(va_arg(arguments, int));
		}

	va_end(arguments);
	return (counter);
}
