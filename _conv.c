/* Converter function */
#include "main.h"

/**
 * _conv - Function
 * @n: Input
 * @b: Base
 * @lc: Flag for lowercase values
 *
 * Description: Converts number to a given number system.
 * Return: num, the converted number.
 * On error, stderr.
 */

char *_conv(unsigned long int n, int b, int lc)
{
	static char *rep, buffer[50];
	char *num;

	rep = (lc)
		? "0123456789abcdef"
		: "0123456789ABCDEF";

	num = &buffer[49];
	*num = '\0';

	do {
		*--num = rep[n % b];
		n /= b;
	} while (n != 0);

	return (num);
}
