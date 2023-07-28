
#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *print_char- function that prints a char
 *@c: character to be printed
 *Return: 1 if non-null character printed, else 0 for null character.
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

	return (0);
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
		return (0);
	}

	for ( ; s[counter] != '\0'; counter++)
	{
		_putchar(s[counter]);
	}

	return (counter);
}

/**
 *print_int- function that prints an integer
 *@n: number to be printed
 *Return: number of digits of n
 */

int print_int(int n)
{
	int counter = 0;
	unsigned int number;

	if (n < 0)
	{

		_putchar('-');
		counter++;
		number = -n;
	}

	else
	{
		number = n;
	}



	if (number / 10)
	{
		counter += print_int(number / 10);
	}
	_putchar((number % 10) + '0');

	return (counter);
}
