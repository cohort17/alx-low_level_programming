#include <unistd.h>

/**
 *_putchar- print a character to the stdout 
 *@c: it is the character to be printed
 *Return: on successful process, return 1
 *if an error occur, return -1
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
