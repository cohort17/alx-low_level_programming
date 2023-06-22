#include <stdio.h>
/**
*more_numbers - Prints the numbers 0-14 ten times.
*/
void print_line(int n)
{
int len;
if (n > 0)
{
for (len = 0; len < n; len++)
_putchar('_');
}
_putchar('\n');
}
