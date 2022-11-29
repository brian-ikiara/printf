/* Memory address */
#include "main.h"

/**
 * _paddress - Function
 * @l: _printf() args
 * @f: Pointer to flag specifer
 *
 * Description: Prints the memory address in hexadecimal format
 * (p's conversion).
 * Return: c, the counter.
 * On error, stderr.
 */

int _paddress(va_list l, flag *f)
{
	unsigned long int p = va_arg(l, unsigned long int);
	char *s = _conv(p, 16, 1);

	register int c = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));

	c += _puts("0x");
	c += _puts(s);

	return (c);
}
