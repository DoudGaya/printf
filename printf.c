#include "main.h"

/**
 * _printf - A function to print formatted output.
 * @format: The format string to use.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		while (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					count = count + print_char(args);
					i += 2;
					break;
				case 's':
					count = count + print_string(args);
					i += 2;
					break;
				case '%':
					_putchar('%');
					count++;
					i += 2;
					break;
				case 'd':
					count += print_decimal(va_arg(args, int));
					i  += 2;
					break;
				case 'i':
					count += print_decimal(va_arg(args, int));
					i += 2;
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
							i += 2;
			}
		}
		count = count + _putchar(format[i]);
	}
	va_end(args);
	return (count);
}
