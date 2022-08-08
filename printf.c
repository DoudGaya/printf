#include "main.h"

/**
 * _printf - A function to print formatted output.
 * @format: The format string to use.
 * @...: The arguments to insert into the format string.
 * Description: This function prints formatted output to stdout
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		while (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					count = count + print_char(args);
					i += 2;
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
							i += 2;
			}
		}
		if (format[i])
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		va_end(args);
	}
	return (count);
}
