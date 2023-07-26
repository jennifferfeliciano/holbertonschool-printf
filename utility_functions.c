#include "main.h"

/**
 *
 *
 *
 *
 */

int print_char(char c);
{
}


/**
 *print_string- function that prints a string
 *@c: pointer to the first character of the string
 *Return: length of the string
 */

int print_string(char *s);
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
		for(; s[counter] != '\0'; counter++)

			_putchar(s[counter]);
	}

	return (counter);
}





/**
 *
 *
 *
 */

int print_int(int n);
{
}
