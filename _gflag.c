/* To get the flag specifier */
#include "main.h"

/**
 * _gflag - Function
 * @c: The flag character
 * @f: Pointer to struct Flag
 *
 * Description: Turns on the flag specified.
 * Return: i, the value.
 * On error, stderr.
 */

int _gflag(char c, flag *f)
{
	int i = 0;

	switch (c)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
