_printf Project README

This project implements a custom function called _printf. This function emulates the standard C library function printf. It lets you print characters, strings, and integers with formatted output. 

Table of Contents
Introduction
How to Use
Supported Format Specifiers
File Descriptions
Compilation
Author

The _printf function is a custom implementation of printf in C. It takes a format string and variable arguments, printing data types based on format specifiers. Supported specifiers include %c (characters), %s (strings), %i or %d (integers), and %% (percent symbol).

How to Use

To use the _printf function in your code:

1. Clone or download the _printf project repository.
2. Copy the main.h file into your project directory (if not already there).
3. Include the main.h header file in your code.
4. Call the _printf function with the desired format string and arguments.

#include "main.h"

int main(void)
{
    int num = 12;
    char c = 'T';
    char *str = "Hello, world!";

    _printf("Integer: %i\nCharacter: %c\nString: %s\n", num, c, str);

    return (0);
}

The output:

Integer: 12
Character: T
String: Hello, world!

Supported Format Specifiers
The _printf function supports the following format specifiers:

%c: To print a single character.
%s: To print a string.
%i or %d: To print an integer.
%%: To print a  percent symbol.


If you use a format specifier that is not supported or invalid, it will be treated as a regular character and printed as it is.

File Descriptions

main.h: The header file containing function prototypes and necessary includes.
_printf.c: The implementation of the _printf function.
utility_functions.c: Helper functions to print characters, strings, and integers.

Compilation
To compile your code, you can use the following command:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

Author
This _printf project was created by Jenniffer Feliciano as part of a C programming project at Holberton School, San Juan.
