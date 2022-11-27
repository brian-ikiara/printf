/* Function selector */
#include "main.h"

/**
 * _selfunc - Function pointer
 * @c: Conversion specifier
 *
 * Description: Selects a function based on the given
 * conversion specifier.
 * Return: f_a[i].pf, pointer to respective function; NULL, otherwise.
 * On error, stderr.
 */

int (*_selfunc(char c))(va_list, flag *)
{
	int cs = 14;
	handler f_a[] = {
		{'c', _pchar},
		{'s', _pstr},
		{'d', _pint},
		{'i', _pint},
		{'b', _pbinary},
		{'o', _poctal},
		{'u', _punsigned},
		{'x', _phex},
		{'X', _phexxx},
		{'S', _pbigstr},
		{'r', _prev},
		{'R', _prot13},
		{'p', _paddress},
		{'%', _ppercent},
	};
	register int i;

	for (i = 0; i < cs; i++)
	{
		if (f_a[i].fs == c)
			return (f_a[i].pf);
	}

	return (NULL);
}
