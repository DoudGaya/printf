#include "main.h"

/**
 *  _puts - A function to print a string.
 *  @str: The string to print.
 *  Description: This function prints a string to stdout.
 *  Return: The number of characters printed.
 */
int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_string - Function that prints a string
 * @arg: arguments counts
 * Return: return the number of char
 */
int print_string(va_list args)
{
	return (_puts(va_arg(args, char *)));
}
