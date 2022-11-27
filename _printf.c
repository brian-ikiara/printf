/* The Final Boss :) */
#include "main.h"

/**
 * _printf - Variadic function
 * @format: The format specifier
 *
 * Description: printf() implementation. Phew!
 * Return: c, length of output string.
 * On error, stderr.
 */

int _printf(const char *format, ...)
{
	const char *p;
	flag cs = {0, 0, 0};
	int (*f_ptr)(va_list, flag *);
	va_list a;

	register int c = 0;

	va_start(a, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				c += _putchar('%');
				continue;
			}

			while (_gflag(*p, &cs))
				p++;

			f_ptr = _selfunc(*p);
			c += (f_ptr)
				? f_ptr(a, &cs)
				: _printf("%%%c", *p);
		}
		else
			c += _putchar(*p);
	}
	_putchar(-1);
	va_end(a);

	return (c);
}
