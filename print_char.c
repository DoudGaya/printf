#include "main.h"

/**
 * print_char - printing a charcter
 * @args: argument
 *
 * Return: always 1
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
