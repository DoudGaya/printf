#include "main.h"

/** 
 *  print_string - A function to print a string.
 *  @args: The string to print.
 *  Description: This function prints a string to stdout.
 *  Return: The number of characters printed.
 */

int _puts (char *str)
{
	int i = 0;
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	return (i);
}
int print_string (va_list arg)
{
	return (_puts(va_arg(args, char *)));
}
