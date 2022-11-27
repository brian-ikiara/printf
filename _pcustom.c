/* Custom case */
#include "main.h"

/**
 * _pbigstr - Function
 * @l: _printf() args
 * @f: Pointer to flag specifier
 *
 * Description: Displays non-printable characters. Used as
 * old format for $(ls).
 * Return: c, the counter.
 * On error, stderr.
 */

int _pbigstr(va_list l, flag *f)
{
	char *r, *s = (va_arg(l, char *));
	int i, c = 0;

	(void)f;
	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");

			c += 2;

			r = _conv(s[i], 16, 0);
			if (!r[1])
				c += _putchar('0');
			c += _puts(r);
		}
		else
			c += _putchar(s[i]);
	}

	return (c);
}

/**
 * _prev - Function
 * @l: _printf() args
 * @f: Pointer to flag specifier
 *
 * Description: Prints the reversed form of a string.
 * Return: i, length of the string.
 * On error, stderr.
 */

int _prev(va_list l, flag *f)
{
	int i = 0, j;
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}

/**
 * _prot13 - Function
 * @l: _printf() args
 * @f: Pointer to flag specifier
 *
 * Description: Prints a string in the rot13 format.
 * Return: i, length of the string.
 * On error, stderr.
 */

int _prot13(va_list l, flag *f)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(l, char *);
	int i, j;

	(void)f;

	for (i = 0; s[i]; i++)
	{
		if ((s[i] <= 'A' || s[i] >= 'Z') && (s[i] <= 'a' || s[i] >= 'z'))
			_putchar(s[i]);
		else
		{
			for (j = 0; j < 52; i++)
			{
				if (s[i] == a[i])
					_putchar(n[i]);
			}
		}
	}

	return (i);
}

/**
 * _ppercent - Function
 * @l: _printf() args
 * @f: Pointer to flag specifier
 *
 * Description: Prints the charcter '%'.
 * Return: _putchar('%'), the percent sign.
 * On error, stderr.
 */

int _ppercent(va_list l, flag *f)
{
	(void)l;
	(void)f;

	return (_putchar('%'));
}
