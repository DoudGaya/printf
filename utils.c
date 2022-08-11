#include "main.h"



/**
 * is_printable - checks if a character is printable
 *
 * @c: parameter to check
 *
 * Return: 1 if printable, 0 if not
 */

int is_printable(char c)

{

	if (c >= 32 && c < 127)

	{

		return (1);

	}



	return (0);

}



/**
 * append_hexa_code - appends a hexadecimal code to a string
 *
 * @buffer: string to append to
 *
 * @i: index of string
 *
 * @ascii_code: ascii code to append
 *
 * Return: number of characters appended
 */

int append_hexa_code(char ascii_code, char buffer[], int i)

{

	char map_to[] = "0123456789ABCDEF";

	if (ascii_code < 0)

	{

		ascii_code *= -1;

	}



	buffer[i++] = '\\';

	buffer[i++] = 'x';



	buffer[i++] = map_to[ascii_code / 16];

	buffer[i] = map_to[ascii_code % 16];



	return (3);

}



/**
 * is_digit - checks if a character is a digit
 *
 * @c: parameter to check
 *
 * Return: 1 if digit, 0 if not
 */

int is_digit(char c)

{

	if (c >= '0' && c <= '9')

	{

		return (1);

	}

	return (0);

}



/**
 * convert_size_number - converts a number to a string
 *
 * @num: number to convert
 *
 * @size: size of string to convert to
 *
 * Return: Casted value of num
 */

long int convert_size_number(long int num, int size)

{

	if (size == S_LONG)

	{

		return (num);

	}

	else if (size == S_SHORT)

	{

		return ((short)num);

	}



	return ((int)num);

}

/**
 * convert_size_unsgnd - converts a number to a string
 *
 * @num: number to convert
 *
 * @size: size of string to convert to
 *
 * Return: Casted value of num
 */

long int convert_size_unsgnd(unsigned long int num, int size)

{

	if (size == S_LONG)

	{

		return (num);

	}

	else if (size == S_SHORT)

	{

		return ((unsigned short)num);

	}

	return ((unsigned int)num);

}
