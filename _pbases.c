/* Number systems case */
#include "main.h"

/**
 * _pbinary - Function
 * @l: _printf() args
 * @f: Pointer to flag specifier
 *
 * Description: Converts int to binary digit.
 * Return: _puts(s), the binary digit.
 * On error, stderr.
 */

int _pbinary(va_list l, flag *f)
{
	unsigned int n = va_arg(l, unsigned int);
	char *s = _conv(n, 2, 0);

	(void)f;
	return (_puts(s));
}

/**
 * _poctal - Function
 * @l: _printf() args
 * @f: Pointer to flag specifier
 *
 * Description: Converts int to octal digit.
 * Return: c, the counter.
 * On error, stderr.
 */

int _poctal(va_list l, flag *f)
{
	unsigned int n = va_arg(l, unsigned int);
	char *s = _conv(n, 8, 0);
	int c = 0;

	if (f->hash == 1 && s[0] != '0')
		c += _putchar('0');

	c += _puts(s);

	return (c);
}

/**
 * _punsigned - Function
 * @l: _printf() args
 * @f: Pointer to flag specifier
 *
 * Description: Prints an unsigned decimal digit.
 * Return: _puts(), the digit.
 * On error, stderr.
 */

int _punsigned(va_list l, flag *f)
{
	unsigned int n = va_arg(l, unsigned int);
	char *s = _conv(n, 10, 0);

	(void)f;

	return (_puts(s));
}

/**
 * _phex - Function
 * @l: _printf() args
 * @f: Pointer to flag specifier
 *
 * Description: Converts int to hexadecimal digit.
 * Return: c, the counter.
 * On error, stderr.
 */

int _phex(va_list l, flag *f)
{
	unsigned int n = va_arg(l, unsigned int);
	char *s = _conv(n, 16, 1);
	int c = 0;

	if (f->hash == 1 && s[0] != '0')
		c += _puts("0x");

	c += _puts(s);

	return (c);
}


/**
 * _phexxx - Function
 * @l: _printf() args
 * @f: Pointer to flag specifier
 *
 * Description: Converts int to hexadecimal digit.
 * Return: c, the big hexadeimal digit.
 * On error, stderr.
 */

int _phexxx(va_list l, flag *f)
{
	unsigned int n = va_arg(l, unsigned int);
	char *s = _conv(n, 16, 0);
	int c = 0;

	if (f->hash == 1 && s[0] != '0')
		c += _puts("0X");

	c += _puts(s);

	return (c);
}
