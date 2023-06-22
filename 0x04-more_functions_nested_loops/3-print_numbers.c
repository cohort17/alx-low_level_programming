#include "main.h"
/**
*print_numbers - Prints the numbers from 0-9
*var: is the num is the number to be printed
*/
void print_numbers(void)
{
int var;
for (var = 0; var <= 9; var++)
_putchar((var % 10) + '0');
_putchar('\n');
}
