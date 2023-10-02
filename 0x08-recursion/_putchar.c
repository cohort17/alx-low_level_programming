#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes character to std output.
 *
 *@c: character to be written
 *
 *Return: returns 1 if passed 
 * or -1 if failed.
*/

int _putchar(char c)
{
return(write(1, &c, 1));

}
