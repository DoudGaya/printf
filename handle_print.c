#include "main.h"

/**
 * handle_print - prints a string
 * @fmt: string to print
 * @list: list of arguments
 * @ind: index of argument
 * @buffer: buffer to print to
 * @flags: flags to use
 * @width: width to use
 * @precision: precision to use
 * @size: size of buffer
 * Return: number of characters printed
 */

int handle_print(const char *fmt, int *ind, va_list list,
char buffer[], int flags, int width, int precision, int size)
{
	int i, unknlen = 0, p_char = -1;

	fmt_t fmt_types[] = {
	{'c', print_char}, {'s', print_string}, {'%', print_percent},
	{'i', print_int}, {'d', print_int}, {'b', print_binary},
	{'u', print_unsigned}, {'o', print_octal}, {'x', print_hexadecimal},
	{'X', print_hexa_upper}, {'p', print_pointer}, {'S', print_non_printable},
	{'r', print_reverse}, {'R', print_rot13string}, {'\0', NULL}
	};
	for (i = 0; fmt_types[i].fmt != '\0'; i++)
	{
		if (fmt[*ind] == fmt_types[i].fmt)
		{
		return (fmt_types[i].fn(list, buffer, flags, width, precision, size));
		}
	}
	if (fmt_types[i].fmt == '\0')
	{
		if (fmt[*ind] == '\0')
		{ return (-1); }
		unknlen += write(1, "%%", 1);
		if (fmt[*ind - 1] == ' ')
		{ unknlen += write(1, " ", 1); }
		else if (width)
		{
			--(*ind);
			while (fmt[*ind] != ' ' && fmt[*ind] != '%')
			{ --(*ind); }
			if (fmt[*ind] == ' ')
			{ --(*ind); }
			return (1);
		}
		unknlen += write(1, &fmt[*ind], 1);
		return (unknlen);
	}
	return (p_char);
}
