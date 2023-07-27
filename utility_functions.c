
#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 *print_char- function that prints a char
 *@c: character to be printed
 *Return: 
 */

int print_char(char c)
{
	if (c == '\0')
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
	}

	else
		_putchar(c);

	return (1);
}


/**
 *print_string- function that prints a string
 *@s: pointer to the first character of the string
 *Return: length of the string
 */

int print_string(char *s)
{
	int counter = 0;

	if (s == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
	}

	else
	{
		for(; *s != '\0'; counter++)

			_putchar(s[counter]);
	}

	return (counter);
}
