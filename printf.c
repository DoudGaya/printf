#include "main.h"

/**
 * _printf - A function to print formatted output.
 * @format: The format string to use.
 * @...: The arguments to insert into the format string.
 * Description: This function prints formatted output to stdout.
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
int i = 0, count = 0;
while (format[i])
{
	_putchar(format[i]);
	count++;
	i++;
}
return (count);
}
