/* Numbers case */
#include "main.h"

/**
 * _digcount - Function
 * @i: Integer
 *
 * Description: Gives the number of digits in the integer i.
 * Return: d, number of digits.
 * On error, stderr.
 */

int _digcount(int i)
{
	unsigned int d = 0, u;

	if (i < 0)
		u = i * -1;
	else
		u = i;

	while (u != 0)
	{
		u /= 10;
		d++;
	}

	return (d);
}

/**
 * _pnum - Function
 * @n: Number
 *
 * Description: Prints a number.
 * Return: void.
 * On error, stderr.
 */

void _pnum(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		_pnum(num / 10);
	_putchar((num % 10) + '0');
}

/**
 * _punsigned - Function
 * @l: _printf() args
 * @f: Pointer to flag specifier
 *
 * Description: Prints the unsigned decimal.
 * Return: _puts(s), unsigned int.
 * On error, stderr.
 */

int _punsigned(va_list l, flag *f)
{
	unsigned int u = va_arg(l, unsigned int);
	char *s = _conv(u, 10, 0);

	(void)f;

	return (_puts(s));
}

/**
 * _pint - Function
 * @l: _printf() args
 * @f: Pointer to flag specifier
 *
 * Description: Prints an integer.
 * Return: c, result of _digcount().
 * On error, stderr.
 */

int _pint(va_list l, flag *f)
{
	int n = va_arg(l, int), c = _digcount(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		c += _putchar(' ');

	if (f->plus == 1 && n >= 0)
		c += _putchar('+');

	if (n <= 0)
		c++;
	_pnum(n);

	return (c);
}
