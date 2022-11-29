#include "main.h"
#include <unistd.h>

/**
 * _putchar - Function
 * @c: Character
 *
 * Description: putchar() implementation. Buffer size = 1024.
 * Return: 1.
 * On error, -1 and stderr is set appropriately.
 */

int _putchar(char c)
{
	static char *b[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &(*b), i);
		i = 0;
	}

	if (c != -1)
	{
		*b[i] = c;
		i++;
	}

	return (1);
}

/**
 * _puts - Function
 * @str: String
 *
 * Description: puts() implementation.
 * Return: i, the counter.
 * On error, stderr.
 */

int _puts(char *str)
{
	register int i;

	for (i = 0; str[0] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
