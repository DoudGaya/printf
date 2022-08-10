#include "main.h"

/**
 * print_decimal - print positive and negative valule
 * @num: numb
 *
 * Return: value
 */
int print_decimal(int num)
{
	int count = 0;

	if (num < 0)
	{
		count += _putchar('-');
		num = num * -1;
	}
	else if (num > 0)
		_putchar(num / 10 + '0');

	count = _putchar(num % 10 + '0');

	return (count);
}
