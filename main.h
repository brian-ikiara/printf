#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct Flag - Structure
 * @plus: '+'
 * @space: ' '
 * @hash: '#'
 *
 * Description: Turns on when flag specifier is passed to _printf()
 */

typedef struct Flag
{
	int plus;
	int space;
	int hash;
} flag;

/**
 * struct Handler - Structure
 * @fs: Format specfier
 * @pf: Pointer to function
 *
 * Description: Chooses a function based on the value of fs.
 */

typedef struct Handler
{
	char fs;
	int (*pf)(va_list l, flag *f);
} handler;

/* putchar() and puts() implementation */
int _putchar(char c);
int _puts(char *str);

/* Alphanumeric cases */
int _pchar(va_list l, flag *f);
int _pstr(va_list l, flag *f);

/* Numbers case */
int _digcount(int i);
void _pnum(int n);
int _punsigned(va_list l, flag *f);
int _pint(va_list l, flag *f);

/* Number systems case */
int _pbinary(va_list l, flag *f);
int _poctal(va_list l, flag *f);
int _phex(va_list l, flag *f);
int _phexxx(va_list l, flag *f);

/* Custom cases */
int _pbigstr(va_list l, flag *f);
int _prev(va_list l, flag *f);
int _prot13(va_list l, flag *f);

/* Memory address */
int _paddress(va_list l, flag *f);

/* Percent only (not as conversion specifier) */
int _ppercent(va_list l, flag *f);

/* Conversion function */
char *_conv(unsigned long int n, int b, int lc);

/* To get the flag specifier */
int _gflag(char s, flag *f);

/* To get the various print functions */
int (*_gprint(char s))(va_list, flag);

/* _printf() */
int _printf(const char *format, ...);

#endif
