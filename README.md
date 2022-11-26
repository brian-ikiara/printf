__printf() implementation__

-----------------------------------------------------------------------------------------------

__SYNOPSIS__

**Original printf()**
```
	#include <stdio.h>
	int printf(const char *format, ...);
```

**Implemented printf()**
```
	#include "main.h"
	int _printf(const char *format, ...);
```

-----------------------------------------------------------------------------------------------

__DESCRIPTION__

The normal printf() is designed to produce output based on a given specifier format.
Output ranges from characers to various number systems. Based on the conditions, various
other implementations such as sprintf() and vsnprintf() arise.

In our implementation, we'll be employing variadic functions, function pointers, struct
and typedef, arrays...It basically is a culmination of what we've learnt so far in our
@alx\_africa journey.

Welcome aboard.

**Format string fundamentals**
	
The specifier format is a string and it's general usage is as follows:
		
	_printf("%<flag><specifier>", <symbol1>, <symbol2>, ..., <symboln>);

**Flags used**
	
Flags are characters that perform a similar job as a wildcard on the shell. For this
implementation the following were used:

	+/-	Plus, Minus: Denotes positive and negative sign convention, respectively.

	' '	Space: Places a blank before a positive number/empty string.

	#	Hash: Converts a number to a different base/number system.

	0	Zero padding: Pads a number with a given number of zeros instead of an empty space.
		Used with b, d, o, x, X conversion specifiers.

**Length modifiers used**
	
	h	Short: Corresponds to a(n) (unsigned)short int.

	l	Long: Corresponds to a(n) (unsigned) long int.

**Conversion specifiers used**
	
The characters listed below were used to specify the various formats the output will
be presented. Are used together with the '%' character. They are as follows:

	c	Character: Prints out a character.

	s	String: Prints out an array of characters.

	d, i	Integer: Prints out an integer.

	b, u, o, x, X
		Binary, Unsigned Decimal, Octal, Hexadecimal, Big Hexadecimal: Prints out the
		various number systems.

	S	Big String: Prints non-printable characters (0 < (ASCII value <32) <= 127). The
		format they're printed out is "\x<HDASCII>"

	p	Pointer: Gives the memory address in hexadecimal

**Custom conversion specifiers used**
	
These do an interesting job. Loved working with them:

	r	Reverse: Prints out a reversed string.

	R	rot13: Prints a string in the rot13 format.

-----------------------------------------------------------------------------------------------

__REMARKS__
	
We really enjoyed this project and we can't wait for the next one, the Simple Shell.
