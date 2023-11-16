#include "main.h"

/**
 *_print_rev_rwcursion - prints a string in a rrverse form
 *
 *@s: it is the string that is to be prinred in reverse
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
{
_putchar(*s);
_print_rev_recursion(s +1);
}

}
