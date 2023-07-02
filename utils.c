#include "main.h"

/**
 * is_printable -  this function evaluates whether a character is printable.
 * @c: the character to be evaluated
 *
 * Return: 0 if c is non-printable or 1 if c is printable.
 */

int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - this function appends ASCII in
 * hexadecimal code to buffer.
 * @buffer: the array buffer of characters.
 * @i: the index at which to start appending
 * @ascii_code: THE ASCII CODE
 * Return: Always 3
 */

int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - this function verifies whether a character is a digit.
 * @c: the character to be evaluated.
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);

}

/**
 * convert_size_number - this  function casts a number to the specified size.
 * @num: the variable to cast.
 * @size: the number that indicates the type to be casted.
 *
 * Return: Casted value of the number.
 */

long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsignd - this function casts a number to the specified size.
 * @num: the number to be casted.
 * @size: the number that indicates the type to be casted.
 *
 * Return: Casted value of the number.
 */

long int convert_size_unsignd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
