/* Alphanumeric case */
#include "main.h"

/**
 * _pchar - Function
 * @l: _printf() args
 * @f: Flag specifier
 *
 * Description: Prints a character
 * Return: void.
 * On error, stderr.
 */

void _pchar(va_list l, flag *f)
{
	int c;

	(void)f;
	c = va_arg(l, int) + '0';
	_putchar(c);
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
