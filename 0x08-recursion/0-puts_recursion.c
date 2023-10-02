#include "main.h"

/**
 *_puts_recursion - writes a string and follow by a newline
 *
 *@s: string to be written.
*/

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
