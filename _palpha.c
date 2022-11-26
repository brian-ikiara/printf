/* Alphanumeric case */
#include "main.h"

/**
 * _pchar - Function
 * @l: _printf() args
 * @f: Flag specifier
 *
 * Description: Prints a character
 * Return: 1.
 * On error, stderr.
 */

int _pchar(va_list l, flag *f)
{
	(void)f;
	_putchar(va_arg(l, int));

	return (1);
}

/**
 * _pstr - Function
 * @l: _printf() args
 * @f: Flag specifier
 *
 * Description: Prints a string.
 * Return: _puts(s), the string.
 * On error, stderr.
 */

int _pstr(va_list l, flag *f)
{
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		s = "(null)";

	return (_puts(s));
}
