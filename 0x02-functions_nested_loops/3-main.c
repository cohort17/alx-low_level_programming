#include "main.h"
/**
*main- it checks the code to be executed
*
*_islower: prints the alphabet in lowercase
*Return: it is always return 0
*/
int main(void)
{
int r;
r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
