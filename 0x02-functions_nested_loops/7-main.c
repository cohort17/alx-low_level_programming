#include "main.h"
/**
*main- it checks the code to be executed
*
*Return: it is always return 0
*/
int main(void)
{
int r;
print_last_digit(98);
print_last_digit(0);
r = print_last_digit(-1024);
_putchar('0' + r);
_putchar('\n');
return (0);
}
